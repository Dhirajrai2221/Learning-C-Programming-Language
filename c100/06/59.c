#include <stdio.h>

int main(void)
{
    int num;
    int *ptr = &num;
    printf("Welcome to showcasing integer pointers.\n");
    printf("Enter a number: ");
    scanf("%d", ptr);

    printf("Value of num = %d\n", num);

    printf("Value of num = %d\n", *ptr);

    return 0;
}