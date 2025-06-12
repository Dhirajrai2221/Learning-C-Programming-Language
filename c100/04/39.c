#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf(" 0");
    if (num > 0)
    {
        printf(" 1");
    }

    int prev = 0;
    int next = 1;

    while (prev + next <= num)
    {
        int temp = next + prev;
        printf(" %d", temp);
        prev = next;
        next = temp;
    }

    return 0;
}
