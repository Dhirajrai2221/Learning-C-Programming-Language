#include <stdio.h>

int main(void)
{
    // Create a program to print the month of the year based on a
    // number(1 - 12) input by the user.

    //  "January", "February", "March", "April",
    // "May", "June", "July", "August",
    // "September", "October", "November", "December"

    int month;
    do
    {
        printf("Enter month in number (1-12): ");
        scanf("%d", &month);
        switch (month)
        {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid month, please enter between (1-12)\n");
            break;
        }
    } while (month <= 0 || month > 12);

    return 0;
}