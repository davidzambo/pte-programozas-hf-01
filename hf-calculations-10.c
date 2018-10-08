/*
 * This program reads two integers as two side
 * of a triangle and a float as the angle between
 * two sides, and returns the length of the third
 * side of the triangle.
 */
#include <stdio.h>
#include <math.h>

void main(){
	int a, b;
	float angle, c;
	
	printf("\nCosinus calculator");
	printf("\n=================\n");
	printf("\nEnter the first side of the triangle (cm): ");
	scanf("%d", &a);
	
	printf("\nEnter the second side of the triangle (cm): ");
	scanf("%d", &b);
	
	printf("\nEnter the angle between the two sides (degree): ");
	scanf("%f", &angle);

	if (angle >= 180) 
	{
		printf("\nERROR: angle can't be larger or equal than 180 degrees\n");
		return;
	}

	c = sqrt(pow(a,2) + pow(b,2) - 2 * a * b * cos(M_PI / 180 * angle));
	printf("\nThe length of the third side is %.3f cm.\n", c);

}

