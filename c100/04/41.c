#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;

    while (copy > 0)
    {
        reverse = (reverse * 10) + (copy % 10);
        copy /= 10;
    }

    if (reverse == num)
    {
        printf("The number %d is a palindrome number.\n", num);
    }
    else
    {
        printf("The number %d is not a palindrome number.\n", num);
    }

    return 0;
}
