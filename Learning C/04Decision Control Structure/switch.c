#include <stdio.h>

int main()
{
    int day;
    printf("Enter a day between (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thusday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Day entered is incorrect.\n");
        break;
    }

    return 0;
}