/*
 * This program reads an integers, then returns if it is even or odd 
 * until user enters 0.
 */

#include <stdio.h>

void main()
{
    int num;
    printf("\nEven/Odd decider");
    printf("\n================");

    for(num = 1; num > 0 || num < 0; )
    {
        printf("\nPlease enter a number: ");
        scanf("%d", &num);
        printf("\nIt's %s!\n", (((num % 2) == 1) ? "odd" : "even"));
    }

    printf("\nExit...\n");
}
