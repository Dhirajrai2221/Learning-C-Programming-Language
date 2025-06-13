#include <stdio.h>

void minmax(int *a, int *b, int *min, int *max);

int main()
{
    int first, second, min, max;
    printf("Welcome to finding min and max \n");
    printf("enter a first number: ");
    scanf("%d", &first);
    printf("enter a second number: ");
    scanf("%d", &second);

    minmax(&first, &second, &min, &max);
    printf("Between %d and %d, minimum is %d and maximum is %d\n", first, second, min, max);

    return 0;
}

void minmax(int *a, int *b, int *min, int *max)
{
    if (*a < *b)
    {
        *min = *a;
        *max = *b; 
    }else {
        *min = *b;
        *max = *a; 
    }
}