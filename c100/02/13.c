#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    float num1, num2;
    printf("enter a number in float: ");
    scanf("%f", &num1);
    printf("enter a number in float: ");
    scanf("%f", &num2);

    printf("the product of two given floating number : %.2f", num1 * num2);

    return 0;
}
