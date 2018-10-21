/*
 * This program prints out averege of the first ten numbers 2nd powers
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int num;
    double sum = 0;
    printf("\nAverage of the first ten number's second power");
    printf("\n==============================================\n");

    for (num = 1; num <= 10; num++)
    {
        sum += pow(num, 2);
        printf("num: %d, sum: %f\n", num, sum);
    }

    printf("\nThe average of the first %d number is: %f\n", num - 1, sum/(num - 1));
}
