#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 2;
    while (i < num)
    {
        if (num % 2 == 0)
        {
            printf("%d is not a prime.\n", num);
            return 1;
        }
        i++;
    }

    printf("%d is a prime.", num);

    return 0;
}
