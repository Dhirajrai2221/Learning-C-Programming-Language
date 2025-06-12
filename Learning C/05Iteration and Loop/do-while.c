#include <stdio.h>

int main(int argc, char const *argv[])
{

    // int num = 0;
    // while (num != 10)
    // {
    //     printf("Enter a number: ");
    //     scanf("%d", &num);
    // }

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    int num;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num != 10);

    return 0;
}
