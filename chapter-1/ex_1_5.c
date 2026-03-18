#include <stdio.h>

#define UPPER 300
#define STEP 20

/* Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. */

int main()
{
    float celcius = UPPER;
    float fahrenheit = 0;

    printf("Celsius\tFahrenheit\n");

    while (celcius >= 0)
    {
        fahrenheit = (celcius * 1.8) + 32;
        printf("%0.2f\t%0.2f\n", celcius, fahrenheit);
        celcius -= STEP;
    }

    return 0;
}