#include <stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main(int argc, char const *argv[])
{

    int res = factorial_using_loop(4);
    printf("Factorial using loop: %d\n", res);

    int res2 = factorial_using_loop(4);
    printf("Factorial using recursion: %d\n", res2);

    return 0;
}

int factorial_using_recursion(int num)
{
    printf("#");
    if (num == 0)
    {
        return 1;
    }

    return num * factorial_using_loop(num - 1);
}

int factorial_using_loop(int num)
{
    printf("#");
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
