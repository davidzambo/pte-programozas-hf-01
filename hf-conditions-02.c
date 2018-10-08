/*
 * This program reads an integer, then decide if it smaller than 100,
 * larger then 100 but less then 1000, or larger then 1000.
 */

#include <stdio.h>

void main()
{
	int num;
	printf("\nPlease enter a number: ");
	scanf("%d", &num);

	if (num <= 100)
	{
		printf("\nThe given number is less or equal then 100.\n");
	}
	else if (num <= 1000)
	{
		printf("\nThe given number is larger then 100 but less or equal then 1000.\n");
	}
	else
	{
		printf("\nThe given number is larger then 1000.\n");
	}
}

