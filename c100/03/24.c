#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13)
    {
        printf("Child\n");
    }
    else if (age < 20)
    {
        printf("Teen\n");
    }
    else if (age < 60)
    {
        printf("Adult\n");
    }else 
    {
        printf("Senior\n");
    }

    return 0;
}
