#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0;
    int copy = num;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of the digits of %d is %d.\n", copy, sum);

    return 0;
}
