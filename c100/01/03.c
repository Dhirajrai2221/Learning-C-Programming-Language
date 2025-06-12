#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[22];
    printf("What's your name: ");
    // scanf("%s", name);
    scanf("%22s", name);
    printf("Welcome %s to Baglung", name);
    return 0;
}
