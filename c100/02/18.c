#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    float F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    printf("temp: %.2f C", (F - 32) * (5.0f / 9.0f));

    return 0;
}
