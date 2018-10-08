/*
 * This program reads two integers as the side length and the height 
 * of a pyramid, and returns the volume and surface of it.
 */
#include <stdio.h>
#include <math.h>

void main(){
	int side, height;
	double volume, surface;
	
	printf("\nVolume and surface calculator for a pyramid");
	printf("\n===========================================\n");
	printf("\nEnter the side length (cm): ");
	scanf("%d", &side);

	printf("Enter the height (cm): ");
	scanf("%d", &height);
	
	volume = (pow(side,2) * height) / 3;
	printf("\nThe volume of the pyramid is %.3f cm3\n", volume);
	
	surface = pow(side, 2) + 2*( side * sqrt(pow(side/2, 2) + pow(height,2)));
	printf("\nThe surface of the pyramid is %.3f cm2\n", surface);

}

