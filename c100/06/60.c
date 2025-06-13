#include <stdio.h>

int main(void)
{
    int num = 5;

    int *ptr = &num;

    printf("the value of num is %d\n", num);
    *ptr = 50;
    printf("the value of num is %d\n", num);

    return 0;
}