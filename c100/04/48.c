#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
