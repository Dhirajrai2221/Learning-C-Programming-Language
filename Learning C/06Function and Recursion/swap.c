#include <stdio.h>

void swap(int, int);

int main(int argc, char const *argv[])
{

    int x = 4;
    int y = 7;

    printf("x: %d, y: %d\n", x, y);
    swap(x, y);
    printf("x: %d, y: %d\n", x, y);

    return 0;
}

void swap(int first, int second)
{
    printf("First: %d, Second: %d\n", first, second);
    int temp = first;
    first = second;
    second = temp;
    printf("First: %d, Second: %d\n", first, second);

}