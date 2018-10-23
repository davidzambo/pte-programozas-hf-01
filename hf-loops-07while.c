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
    int i = 0, j = 0, repeat;

    printf("\nNth long tree");
    printf("\n=============\n");

    printf("Please enter a number (smaller than 10): ");
    scanf("%d", &repeat);

    if (repeat >= 10)
    {
        printf("Please... \nI think I asked it soooo polite...\nExit...\n");
        return;
    }

    while (i < repeat)
    {
        j = 0;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n");
}