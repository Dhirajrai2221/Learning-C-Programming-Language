#include <stdio.h>

int main(void)
{

    int num = 88;
    int *ptr = &num;

    printf("Value of num = %d\n", num);

    *ptr = 44;
    
    printf("Value of num = %d\n", num);
    

    return 0;
}