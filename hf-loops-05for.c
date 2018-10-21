/*
 * This program asks for an integer, then prints out a "wave" depends on
 * the number.
 * 1
 * 22
 * 333
 * 4444
 * 333
 * 22
 * 1
 * 
 */
#include <stdio.h>

void main()
{
    int i, j, repeat;
    
    printf("\nNth long wave");
    printf("\n=============\n");

    printf("Please enter a number (smaller than 10): ");
    scanf("%d", &repeat);

    if (repeat >= 10) {
        printf("Please... \nI think I asked it soooo polite...\nExit...\n");
        return;
    }

    for (i = 1; i <= repeat; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    for (i = repeat - 1; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\n");
}
