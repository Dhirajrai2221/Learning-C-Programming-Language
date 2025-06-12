#include <stdio.h>

int main(int argc, char const *argv[])
{
    const float PI = 3.14;
    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);

    printf("The area of circe is %.2f cm2.\n", PI * (radius * radius) );

    return 0;
}
