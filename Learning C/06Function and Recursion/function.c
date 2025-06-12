#include <stdio.h>

void count_to_100();

int sum(int x, int y);

int main(int argc, char const *argv[])
{

    count_to_100();
    printf("\n");

    int add = sum(4, 9);
    printf("The sum is %d\n", add);


    int x = 9;
    int y = 10;
    int z = sum(x, y);
    printf("The sum is %d\n", z);

    return 0;
}

void count_to_100()
{
    for (int i = 1; i <= 100; i++)
    {
        printf(" %d", i);
    }
}

int sum(int x, int y)
{
    return x + y;
}