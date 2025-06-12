#include <stdio.h>

int main(int argc, char const *argv[])
{

    int first, second;
    printf("Enter a first number: ");
    scanf("%d", &first);
    printf("Enter a second number: ");
    scanf("%d", &second);

    int min = first > second ? first : second;

    for (int i = min; i >= 1; i--)
    {
        if (first % i == 0 && second % i == 0)
        {
            printf("The GCD of %d and %d is %d.\n", first, second, i);
            break;
        }
    }

    return 0;
}
