#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        printf("Square of %d is %d.\n", num, num * num);
    }

    printf("Bye Bye\n");
    return 0;
}
