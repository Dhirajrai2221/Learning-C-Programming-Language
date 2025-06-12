#include <stdio.h>

int main()
{
    
    int age = 18;
    const float PI = 3.14;
    double PII = 3.1414141414141414;
    char upper_letter = 'A';

    printf("%zu\n",sizeof(age));
    printf("%zu\n",sizeof(PI));
    printf("%zu\n",sizeof(PII));
    printf("%zu\n",sizeof(upper_letter));


    return 0;
}
