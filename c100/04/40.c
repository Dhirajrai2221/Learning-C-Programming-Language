#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0;
    int copy = num;

    while (copy > 0)
    {
        int digit = copy % 10;
        sum += digit * digit * digit;
        copy /= 10;
    }

    if (sum == num)
    {
        printf("The number %d is a armstrong number.\n", num);
    }
    else
    {
        printf("The number %d is not a armstrong number.\n", num);
    }

    return 0;
}
