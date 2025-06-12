#include <stdio.h>

// Create a program using recursion to display the Fibonacci series upto
// a certain number.

int fibonacci(int pos);

int main(int argc, char const *argv[])
{
    int terms;
    printf("Enter a number: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++)
    {
        printf(" %d", fibonacci(i));
    }

    printf("\n");
    return 0;
}

int fibonacci(int pos)
{
    if (pos <= 1)
    {
        return pos;
    }

    int current = fibonacci(pos - 1) + fibonacci(pos - 2);
    return current;
}