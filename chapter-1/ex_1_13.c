#include <stdio.h>

/* Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

void horizontal()
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        ++count;
        if (ch == '\n')
        {
            for (size_t i = 0; i < count - 1; i++)
            {
                printf("#");
            }

            count = 0;

            printf("\n");
        }
    }
}

void vertical()
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        ++count;
        if (ch == '\n')
        {
            for (size_t i = 0; i < count - 1; i++)
            {
                printf("\n#");
            }

            count = 0;

            printf("\n");
        }
    }
}

int main()
{
    // horizontal();

    // vertical();

    return 0;
}
