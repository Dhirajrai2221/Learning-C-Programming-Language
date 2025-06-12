#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0;
    int i = 1;

    while (i <= num)
    {
        sum += i;
        i += 2;
    }

    printf("The sum of all odd number from 1 too %d is %d. \n", num, sum);

    return 0;
}
