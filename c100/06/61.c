#include <stdio.h>

int main()
{
    char character;
    char *ptr = &character;
    printf("Welcome to showcasing character pointers.\n");
    printf("Please enter the value: ");
    scanf("%c", ptr);

    printf("the value of char is %c\n", *ptr);
    printf("the value of char is %c\n", character);

    return 0;
}
