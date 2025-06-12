#include <stdio.h>

int main(int argc, char const *argv[])
{
    int P = 3000;
    int T = 2;
    float R = 2.5;

    printf("simple interest: %.2f",(P * T * R) / 100);

    return 0;
}
