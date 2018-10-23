/*
 * This program reads 20 numbers, then prints out how many of its
 * were positive, negative and zero
 * 
 */
#include <stdio.h>

void main()
{
    int positive = 0, negative = 0, zero = 0, actual;

    printf("\nPositive, negative and zero number counter");
    printf("\n==========================================\n");

    do
    {
        printf("Please enter a number: ");
        scanf("%f", &actual);

        if (actual > 0)
        {
            positive++;
        } 
        else if (actual < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

    } while (positive + negative + zero < 20);

    printf("\nPositive numbers: %d", positive);
    printf("\nNegative numbers: %d", negative);
    printf("\nZero numbers: %d\n", zero);
}
