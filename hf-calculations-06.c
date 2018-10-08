/*
 * This program reads into two integers as the radius and the height 
 * of a cylinder, and returns the volume and surface of i
 */
#include <stdio.h>
#include <math.h>

void main(){
	int radius, height;
	float volume, surface;
	
	printf("\nVolume and surface calculator for a cylinder");
	printf("\n============================================\n");
	printf("\nEnter the radius (cm): ");
	scanf("%d", &radius);

	printf("Enter the height (cm): ");
	scanf("%d", &height);
	
	surface = 2 * radius * M_PI * height + 2 * M_PI * pow(radius, 2);
	printf("\nThe surface of the cylinder is %.3f cm2.", surface);

	volume = M_PI * pow(radius, 2) * height;
	printf("\nThe volumne of the cylinder is %.3f cm3\n", volume);

}

