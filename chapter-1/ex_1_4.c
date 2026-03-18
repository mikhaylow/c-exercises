#include <stdio.h>

#define UPPER 300
#define STEP 20

/* Write a program to print the corresponding Celsius to Fahrenheit table. */

int main()
{
    float celcius = 0;
    float fahrenheit = 0;

    printf("Celsius\tFahrenheit\n");

    while (celcius <= UPPER)
    {
        fahrenheit = (celcius * 1.8) + 32;
        printf("%3.0f\t%3.0f\n", celcius, fahrenheit);
        celcius += STEP;
    }

    return 0;
}