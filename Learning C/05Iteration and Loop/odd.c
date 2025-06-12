#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num = 0;

    while (num != 10)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
    }

    return 0;
}
