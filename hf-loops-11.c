/*
 * This program continuously reads numbers until user enters 0,
 * then returns the minimum, the maximum, and the sum  of the
 * entered numbers.
 * 
 */
#include <stdio.h>

void main()
{
    float min, max, sum = 0, actual, counter = 1;

    printf("\nMin, max and sum printer");
    printf("\n========================\n");

    do
    {
        printf("Please enter a number: ");
        scanf("%f", &actual);

        if (counter++ == 1) {
            min = max = actual;
        }
        if (actual != 0) {
            if (actual < min)
            {
                min = actual;
            }

            if (actual > max)
            {
                max = actual;
            }

            sum += actual;
        }

    } while (actual != 0);

    printf("\nMinumum number: %f", min);
    printf("\nMaximum number: %f", max);
    printf("\nSum of the entered numbers: %f\n", sum);
}
