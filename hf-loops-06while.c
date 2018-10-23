/*
 * This program asks for an integer, then prints out a "wave" depends on
 * the number.
 *    1
 *   22
 *  333
 * 4444
 *  333
 *   22
 *    1
 */
#include <stdio.h>

void main()
{
    int i = 1, j = 1, k, repeat;

    printf("\nNth long wave");
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
        j = 1;
        k = 0;
        while (k < (repeat - i))
        {
            printf(" ");
            k++;
        }
        while (j <= i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }

    while (i > 0)
    {
        j = i;
        k = 0;
        
        while (k < (repeat - i))
        {
            printf(" ");
            k++;
        }

        while (j > 0)
        {
            printf("%d", i);
            j--;
        }
        printf("\n");
        i--;
    }

}
