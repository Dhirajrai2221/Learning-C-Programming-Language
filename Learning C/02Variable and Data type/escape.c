#include <stdio.h>

/*
\n
\t
\b
\'\'
\"\"
\\



*/

int main(int argc, char const *argv[])
{
    printf("Dhiraj\nRai\n");
    printf("Dhiraj\tRai\n");
    printf("Dhiraj\bRai\n");

    printf("Dhiraj\'Rai\' \n");
    printf("Dhiraj\"Rai\" \n");

    printf("Dhiraj \\\\Rai\\\\ \n");
    return 0;
}
