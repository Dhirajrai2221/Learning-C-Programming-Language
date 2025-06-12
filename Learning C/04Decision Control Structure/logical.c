#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    char is_Nepali;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a nepali citizen(Y/N): ");
    scanf(" %c", &is_Nepali);

    // if (is_Nepali == "Y" && age >= 18 && age < 70)
    // {
    //     printf("Your are eligible for license.\n");
    // }
    // else
    // {
    //     printf("You are not eligible for license.\n");
    // }

    if (is_Nepali == 'Y' || (age >= 18 && age < 70))
    {
        printf("Your are eligible for license.\n");
    }
    else
    {
        printf("You are not eligible for license.\n");
    }

    printf("Your age is %d.\n", age);

    return 0;
}