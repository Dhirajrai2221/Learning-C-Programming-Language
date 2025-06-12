#include <stdio.h>

float max(float, float);

int main(int argc, char const *argv[])
{

    float first, second;
    printf("enter a first float number: ");
    scanf("%f", &first);

    printf("enter a second float number: ");
    scanf("%f", &second);

    printf("The large number is %.2f\n", max(first,second));


    return 0;
}

float max(float first, float second)
{
    return first > second ? first : second;
}