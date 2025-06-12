#include <stdio.h>

int reverse(int num, int rev);

int main(int argc, char const *argv[])
{
    int num;
    printf("Welcome to Palindrome Checker \n");
    printf("Please enter the number: ");
    scanf("%d", &num);

    int rev = reverse(num, 0);
    if (num == rev)
    {
        printf("%d is palindrome\n", num);
    }
    else
    {
        printf("%d is not palindrome\n", num);
    }
    return 0;
}

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }

    int reminder = num % 10;
    int new_num = num / 10;
    int new_rev = rev * 10 + reminder;

    return reverse(new_num, new_rev);
}