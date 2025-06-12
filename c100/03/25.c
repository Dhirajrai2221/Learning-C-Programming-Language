#include <stdio.h>

int main(int argc, char const *argv[])
{
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    int min = first < second ? first : second;
    printf("Minimum of the two is: %d\n", min);
    return 0;
}