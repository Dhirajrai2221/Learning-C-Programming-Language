#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Enter a first number: ");
    scanf("%d", &num1);

    printf("Enter a second number: ");
    scanf("%d", &num2);

    printf("Enter a third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greatest number.", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is greatest number.", num2);
    }
    else
    {
        printf("%d is greatest number.", num3);
    }

    return 0;
}
