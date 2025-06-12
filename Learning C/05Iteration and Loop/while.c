#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 1;

    while (num <= 10)
    {
        printf("%d\n", num);
        num++;
    }

    int num2 = 10;

    while (num2 > 0)
    {
        printf("%d\n", num2);
        num2--;
    }

    return 0;
}
