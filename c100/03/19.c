#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number is postive.");
    }
    else if (num < 0)
    {

        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }

    return 0;
}
