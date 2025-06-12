#include <stdio.h>

int main(int argc, char const *argv[])
{

    float A, B, C, D;

    printf("Enter a side: ");
    scanf("%f", &A);
    printf("Enter a side: ");
    scanf("%f", &B);
    printf("Enter a side: ");
    scanf("%f", &C);
    printf("Enter a side: ");
    scanf("%f", &D);


    printf("The perimeter of given rectange is %.2f", A + B + C + D);

    return 0;
}
