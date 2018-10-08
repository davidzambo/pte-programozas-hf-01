/*
 * This program reads a year, and decide if it's a leap year or not.
 */

#include <stdio.h>

void main()
{
	int year;

	printf("\nLeap year checker");
	printf("\n=================");

	printf("\nPlease enter a year: ");
	scanf("%d", &year);
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("\nIt's a leap year\n");
			}
			else 
			{
				printf("\nIt's not a leap year\n");
			}
		}
		else
		{
			printf("\nIt's a leap year\n");
		}
	} 
	else 
	{
		printf("\nIt's not a leap year\n");
	}
}

