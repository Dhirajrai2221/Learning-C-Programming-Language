#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int side;
    printf("Enter a side: ");
    scanf("%d",&side);

    int area_of_square = side * side;

    printf("The area of given square is %d m2.\n", area_of_square);

    return 0;
}
