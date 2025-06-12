#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int P = 3000;
    int T = 3;
    float R = 5.5;

    printf("Compound Interest : %.2f", (P * pow((1 + R / 100),T)) - P);

    return 0;
}
