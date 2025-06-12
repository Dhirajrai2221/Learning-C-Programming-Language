#include <stdio.h>

int main (void)
{
    int i = 3;
    // int *j = &i;
    int *j;
    j = &i;
    int **k;
    k = &j;

    printf("Address of i = %p\n", &i);
    printf("Address of i = %p\n", j);
    printf("Address of i = %p\n", *k);
    printf("Address of j = %p\n", &j);
    printf("Address of j = %p\n", k);
    printf("Address of k = %p\n", &k);

    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **k);

    return 0;
}