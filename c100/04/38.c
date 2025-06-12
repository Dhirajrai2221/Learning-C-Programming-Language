#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;

    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }

    printf("The reverse of the  %d is %d", copy, reverse);

    return 0;
}
