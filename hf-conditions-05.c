/*
 * This program will reads a number as an angle, and return it's type.
 */

#include <stdio.h>

void main()
{
	float angle;
	printf("\nAngle categorizer");
	printf("\n=================\n");

	printf("\nPlease enter an angle in degree: ");
	scanf("%f", &angle);

	if (angle < 90)
	{
		printf("\nIt's an acute angle!\n");
	}
	else if (angle == 90)
	{
		printf("\nIt's a right angle!\n");
	}
	else if (angle < 180)
	{
		printf("\nIt's an obtuse angle!\n");
	}
	else if (angle == 180)
	{
		printf("\nIt's a straight angle!\n");
	}
	else if (angle < 360)
	{
		printf("\nIt's a concave angle!\n");
	}
	else if (angle == 360)
	{
		printf("\nIt's a full angle!\n");
	}
	else
	{
		printf("\nYou've just kidding, haven't you? ;) \n");
	}
}

