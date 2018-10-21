/*
 * This program reads an integers, then returns if it is even or odd 
 * until user enters 0.
 */

#include <stdio.h>

void main()
{
    long int num;
    printf("\nEven/Odd decider");
    printf("\n================");
    
    while (1) {
        printf("\nPlease enter a number: ");
        scanf("%d", &num);

        if (num == 0 ) {
            printf("\nExit...\n");
            break;
        }
        printf("\nIt's %s!\n", (((num % 2) == 1) ? "odd" : "even"));
    } 
}
