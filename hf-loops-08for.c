/*
 * This program asks for an integer, then prints out a graph like this:
 *    *
 *   ***
 *  *****
 * *******
 *  *****
 *   ***
 *    *
 */
#include <stdio.h>

void main()
{
    int i, j, repeat;

    printf("\nNth long rombus");
    printf("\n=============\n");

    printf("Please enter a number (smaller than 10): ");
    scanf("%d", &repeat);

    printf("\n");
    if (repeat >= 10)
    {
        printf("Please... \nI think I asked it soooo polite...\nExit...\n");
        return;
    }

    // write out top
    for (i = 0; i < repeat; i++)
    {
        // write out the top left corner of the rombus
        for (j = repeat; j >= 0; j--)
        {
            if (j > i)
            {
                printf(" ");
            } else {
                printf("*");
            }
        }

        // write out the top right corner of the rombus
        for (j = 0; j < repeat; j++)
        {
            if (j < i)
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // write out bottom
    for (i = repeat - 2; i >= 0; i--)
    {
        // write out the bottom left corner of the rombus
        for (j = repeat; j >= 0; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }

        // write out the top right corner of the rombus
        for (j = 0; j < repeat; j++)
        {
            if (j < i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
}