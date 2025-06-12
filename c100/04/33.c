#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // int i = 1;
    int i = 2;
    int factorial = 1;
    while (i <= num)
    {
        factorial *= i; // 1*2*3*....
        i++;
    }

    printf("factorial of %d is %d\n", num, factorial);

    return 0;
}
