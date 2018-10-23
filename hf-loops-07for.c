/*
 * This program asks for an integer, then prints out a graph like this:
 * *
 * **
 * ***
 * ****
 * *****
 * ****** 
 */
#include <stdio.h>

void main()
{
    int i, j, repeat;

    printf("\nNth long tree");
    printf("\n=============\n");

    printf("Please enter a number (smaller than 10): ");
    scanf("%d", &repeat);

    if (repeat >= 10)
    {
        printf("Please... \nI think I asked it soooo polite...\nExit...\n");
        return;
    }

    for (i = 0; i < repeat; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
}
