#include <stdio.h>

void greet();

int main(int argc, char const *argv[])
{

    greet();
    greet();
    greet();

    return 0;
}

void greet()
{
    printf("Hello, World!\n");
}