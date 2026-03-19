#include <stdio.h>

/* Write a program that prints its input one word per line. */

int main()
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\t')
        {
            printf("\n");
        }
        else
        {
            putchar(ch);
        }
    }

    return 0;
}