#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime.\n", num);
            return 1;
        }
    }

    printf("%d is a prime.", num);

    return 0;
}
clearerr