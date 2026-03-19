#include <stdio.h>

/* Write a program to copy its input to its output, replacing each tab by \t, each
backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
unambiguous way.  */

int main()
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case '\t':
            putchar('\\');
            putchar('t');
            printf("\n");
            break;

        case '\b':
            putchar('\\');
            putchar('b');
            printf("\n");
            break;

        case '\\':
            putchar('\\');
            printf("\n");
            break;

        default:
            break;
        }
    }

    return 0;
}