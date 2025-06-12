#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;

    do
    {
        printf("enter a postive number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("You have sucessfully entered a positive number");

    return 0;
}
