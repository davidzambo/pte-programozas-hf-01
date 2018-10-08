/*
 * This program will reads the x and y coords of a point, and returns
 * it's position on the coordinate system
 */

#include <stdio.h>

void main()
{
	int x, y;

	printf("\nCoordinate system analyzer");
	printf("\n==========================\n");

	printf("\nPlease enter the point's x coordinate value: ");
	scanf("%d", &x);
	printf("\nPlease enter the point's y coordinate value: ");
	scanf("%d", &y);

	if ((x == 0) && (y == 0))
	{
		printf("\nIt is on the origo.\n");
	}
	else if (x == 0)
	{
		printf("\nIt is on the X axis.\n");
	}
	else if (y == 0)
	{
		printf("\nIt is on the Y axis.\n");
	}
	else if (x > 0)
	{
		if (y > 0)
		{
			printf("\nIt is in the first quadrant.\n");
		} 
		else
		{
			printf("\nIt is in the fourth quadrant.\n");
		}
	}
	else
	{
		if (y > 0)
		{
			printf("\nIt is in the second quadrant.\n");
		}
		else
		{
			printf("\nIt is in the third quadrant.\n");
		}
	}
}

