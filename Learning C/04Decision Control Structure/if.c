#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your are eligible for driving license.\n");
    }
    printf("Your age is %d.\n", age);


    if(NULL)
    {
        printf("This is never going to be printed.\n");
    }

    return 0;
}