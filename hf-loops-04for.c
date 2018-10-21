/*
 * This program prints the first ten numbers and decide if it is even or odd
 */

#include <stdio.h>

void main()
{
    int num;
    printf("\nThe first ten number's odd/even decider");
    printf("\n========================================\n");

    for (num = 1; num <= 10; num++)
    {
        printf("Number: %d, it's %s!\n", num, ((num % 2) == 0 ? "even" : "odd"));
    }

    printf("\n");
}
