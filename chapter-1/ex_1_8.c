#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines. */

int main()
{
    int ch;

    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    while ((ch = getchar()) != EOF)
    {
        switch (ch)
        {
        case ' ':
            ++blanks;
            break;

        case '\t':
            ++tabs;
            break;

        case '\n':
            ++newlines;
            break;

        default:
            break;
        }
    }

    printf("Total:\n blanks: %d\n tabs: %d\n newlines: %d\n", blanks, tabs, newlines);

    return 0;
}