/*
 * This program reads two integers as an interval's beginning and end,
 * then reads a third integer to, and then decide if the third number
 * is inside the interval or out of it, and if out of it, which side.
 */

#include <stdio.h>

void main()
{
	int a, b, num, tmp;

	printf("\nIntervallum checker");
	printf("\n===================\n");

	printf("\nPlease enter the left end of the interval: ");
	scanf("%d", &a);

	printf("\nNow please enter the right end of the interval: ");
	scanf("%d", &b);

	printf("\nAnd finally please enter the number which should be investigated: ");
	scanf("%d", &num);

	if (a > b)
	{
		tmp = a;
		a = b;
		b = tmp;
		printf("\nWhoops, you changed the numbers! No problem, we solved that for you!");
	}

	if (num < a)
	{
		printf("\nThe given number is out of the interval on the left side!\n");
	}
	else if (num >= a && num <=b)
	{
		printf("\nThe given number is in the interval!\n");
	} else 
	{
		printf("\nThe given number is out of the interval on the right side!\n");
	}

}

