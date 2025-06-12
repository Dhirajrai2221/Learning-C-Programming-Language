#include <stdio.h>

int add(int, int, int, int);

int main(int argc, char const *argv[])
{
    int sum = add(1, 2, 3, 4);
    printf("The sum is %d\n", sum);

    return 0;
}

int add(int a, int b, int c, int d)
{
    return a + b + c + d;
}