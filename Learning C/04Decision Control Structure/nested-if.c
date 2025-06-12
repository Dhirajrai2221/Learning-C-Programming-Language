#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char is_Nepali;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a nepali citizen(Y/Z): ");
    scanf(" %c", &is_Nepali);

    if (is_Nepali == 'Y')
    {
        if (age < 18)
        {
            printf("Your are too young, please apply after you are 18.\n");
        }
        else if (age > 70)
        {
            printf("Your are senior, You cannot apply anymore.\n");
        }
        else
        {
            printf("Your are eligible for license.\n");
        }
    }
    else
    {
        printf("Only Nepali Citizens can apply for license.\n");
    }

    printf("Your age is %d.\n", age);

    return 0;
}