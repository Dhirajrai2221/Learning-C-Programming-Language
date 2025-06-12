#include <stdio.h>

int main(void)
{

    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    score > 80 ? printf("High\n") : (score >= 50 ? printf("Moderate\n") : printf("Low\n"));

    return 0;
}