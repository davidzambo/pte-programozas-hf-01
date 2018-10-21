/*
 * This program reads three numbers, then returns them from
 * lower to greater.
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int num[3];
    printf("\nBasic number sorter");
    printf("\n===================");

    printf("\nPlease enter the first number: ");
    scanf("%d", &num[0]);
    printf("\nPlease enter the second number: ");
    scanf("%d", &num[1]);
    printf("\nPlease enter the third number: ");
    scanf("%d", &num[2]);

    if (num[0] <= num[1])
    {
        if (num[1] <= num[2])
        {
            printf("\nThe order is %d %d %d", num[0], num[1], num[2]);
        }
        else
        {
            printf("\nThe order is %d %d %d", num[0], num[2], num[2]);
        }
    }
    else
    {
        if (num[0] <= num[2])
        {
            printf("\nThe order is %d %d %d", num[1], num[0], num[2]);
        }
        else
        {
            printf("\nThe order is %d %d %d", num[0], num[1], num[2]);
        }
    }
}
