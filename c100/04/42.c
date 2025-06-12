#include <stdio.h>

int main(int argc, char const *argv[])
{

    int rows = 5;

    printf("Here is the Right Half Pyrmaid\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("-------------------------------\n");

    printf("Here is the Reversed Right Half Pyrmaid\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("-------------------------------\n");
    printf("Here is the Left Half Pyrmaid\n");

    for (int i = 1; i <= rows; i++)
    {

        for (int k = 0; k < rows - i; k++)
        {
            printf("  ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
