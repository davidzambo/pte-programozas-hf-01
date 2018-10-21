/*
 * This program prints the first ten numbers and decide if it is even or odd
 */

#include <stdio.h>

void main()
{
    int num = 1;
    printf("\nThe first ten number's odd/even decider");
    printf("\n========================================\n");

    while (num <= 10)
    {
        printf("Number: %d, it's %s!\n", num, ((num % 2) == 0 ? "even" : "odd"));
        num++;
    }

    printf("\n");
}
