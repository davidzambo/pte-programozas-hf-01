/*
 * This program reads an integers as the side length of a cube, 
 * and returns the volume and surface of it.
 */
#include <stdio.h>
#include <math.h>

void main(){
	int side;
	double volume, surface;
	
	printf("\nVolume and surface calculator for a cube");
	printf("\n========================================\n");
	printf("\nEnter the side length (cm): ");
	scanf("%d", &side);

	volume = pow(side,3);
	printf("\nThe volume of the cube is %.3f cm3\n", volume);
	
	surface = 6 * pow(side, 2);
	printf("\nThe surface of the cube is %.3f cm2\n", surface);

}

