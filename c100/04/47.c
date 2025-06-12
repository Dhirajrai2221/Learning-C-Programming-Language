#include <stdio.h>

int main()
{

    int num;
    int sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0)
        {
            continue;
        }

        sum += num;

    } while (num != 0);

    printf("The sum of all the numbers is %d.\n", sum);

    return 0;
}