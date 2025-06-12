#include <stdio.h>

int main(void)
{

    printf("Welcome to calculator\n");
    char opr;
    float num1, num2;

    printf("Enter a first number: ");
    scanf("%f", &num1);

    printf("Enter a second number: ");
    scanf("%f", &num2);

    printf("Finally, enter the operation (+, -, *, /): ");
    scanf(" %c", &opr);

    float res;
    int invalid = 0;

    switch (opr)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        invalid = 1;
        break;
    }

    if (invalid == 0)
    {
        printf("The result is: %.2f\n", res);
    }
    else
    {
        printf("Invalid operator, please enter (+, -, *, /)\n");
    }

    return 0;
}