#include <stdio.h>

int main()
{

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    number = number > 0 ? number : -number;

    printf("%d is the absolute value", number);

    return 0;
}