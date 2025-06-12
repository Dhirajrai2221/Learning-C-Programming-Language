#include <stdio.h>
#include <time.h>

void print_date();

int main(void)
{

    print_date();
    print_date();

    return 0;
}

void print_date()
{
    // time_t t = time(NULL);
    // struct tm tm = *localtime(&t);
    // printf("Current Date: %d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon, tm.tm_mday);

    time_t current_time;
    time(&current_time);

    char *data_string = asctime(localtime(&current_time));

    printf("Curren Date is %s\n", data_string);
}