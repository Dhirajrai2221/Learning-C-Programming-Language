#include <stdio.h>

int main(int argc, char const *argv[])
{

    printf("Welcome to Number Adder\n");
    int num;
    int sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;

    } while (num != 0);

    printf("The sum of all your numbers is %d.", sum);

    return 0;
}
