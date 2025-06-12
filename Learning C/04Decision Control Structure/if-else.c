#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your are eligible for license.\n");
    }
    else
    {
        printf("Your are too young, please apply after you are 18.\n");
    }
    
    printf("Your age is %d.\n", age);

    return 0;
}