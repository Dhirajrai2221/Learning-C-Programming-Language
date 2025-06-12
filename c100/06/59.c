#include <stdio.h>

int main(void)
{
    int num;
    int *ptr = &num;
    printf("Welcome to showcasing integer pointers\n");
    printf("Please enter a number : ");
    scanf("%d", ptr);

    printf("The value of num is: %d\n", num);

    printf("The value of num is: %d\n", *ptr);

    return 0;
}