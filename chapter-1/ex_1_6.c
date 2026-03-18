#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1. */

int main()
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
        break;
    }

    printf("\nEOF: %d\n", ch != EOF);

    return 0;
}