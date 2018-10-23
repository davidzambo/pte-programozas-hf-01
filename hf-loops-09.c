/*
 * This program reads an integers (for example n = 3), and writes out a
 * graph like this:
 * *    *
 *  * * 
 *   *
 *  * *
 * *   *
 * 
 */
#include <stdio.h>

void main()
{
    int i, j, length, repeat;

    printf("\nChess table");
    printf("\n===========\n");

    printf("Please enter a number (smaller than 10): ");
    scanf("%d", &repeat);

    printf("\n");
    if (repeat >= 10)
    {
        printf("Please... \nI think I asked it soooo polite...\nExit...\n");
        return;
    }

    length = repeat + repeat - 1;

    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)    
        {
            if ((i == j) || (length - 1 - j == i))
            {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");

    }

    printf("\n");
}
