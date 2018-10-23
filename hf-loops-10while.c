/*
 * This program writes out a chess table
 */
#include <stdio.h>

void main()
{
    int row = 0, col = 0;

    printf("\nChess table");
    printf("\n===========\n");

    while (row++ < 10)
    {
        col = 0;
        while (col++ < 10)
        {
            printf("%s", ((col + row) % 2 == 0) ? "X" : "O");
        }
        printf("\n");
    }

    printf("\n");
}