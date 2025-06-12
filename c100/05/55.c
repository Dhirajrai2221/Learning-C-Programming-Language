#include <stdio.h>

void increment(int);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before: the value of num is %d\n", num);
    increment(num);
    printf("After: the value of num is %d\n", num);

    return 0;
}

void increment(int a)
{
    printf("In function before: Value of a is %d\n", a);
    a++;
    printf("In function after: Value of a is %d\n", a);
}