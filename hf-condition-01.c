/*
 * This program reads two integers, compares their sign, 
 * and checks if anyone of them is zero
 */

#include <stdio.h>

void main()
{
	int a, b, result;

	printf("\nNumber comparator");
	printf("\n=================\n");

	printf("Please enter the first number: \n");
	scanf("%d", &a);

	printf("Please enter the second number: \n");
	scanf("%d", &b);

	if (a == 0) 
	{
		printf("The first number is 0\n");
	}

	if (b == 0) 
	{
		printf("The second number is 0\n");
	}

	if ((a * b) > 0) 
	{
		printf("Both numbers have the same sign!\n");
	}
	else
	{
		if (!(a == 0 && b == 0))
		{
			printf("The given numbers have different signs!\n");
		}
	}

}

