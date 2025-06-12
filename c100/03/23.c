#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90)
    {
        printf("Grade A");
    }
    else if (marks > 75)
    {
        printf("Grade B");
    }
    else if (marks > 60)
    {
        printf("Grade C");
    }
    else if (marks > 30)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
