#include <stdio.h>

int main(int argc, char const *argv[])
{

    int num1 = 12;
    int num2 = 20;

    int num3 = 0;

    num3 = num1;
    num1 = num2;
    num2 = num3;
    

    printf("num1: %d\n",num1);
    printf("num2: %d\n",num2);

    return 0;
}
