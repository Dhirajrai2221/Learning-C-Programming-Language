#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the first number: ");
    scanf("%d", &num);
    
    num % 2 == 0 ? printf("The number is even.") : printf("The number is odd.");

    return 0;
}
