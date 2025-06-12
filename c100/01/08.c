#include <stdio.h>

#define PI 3.14

int main(int argc, char const *argv[])
{
    // const float PI = 3.14;

    float radius;

    printf("Enter radius: ");

    scanf("%f", &radius);

    printf("circumference: %.2f", 2 * PI * radius);

    return 0;
}
