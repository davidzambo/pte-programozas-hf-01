/*
 * This program reads two integers as the radius and the height 
 * of a cone, and returns the volume and surface of it.
 */
#include <stdio.h>
#include <math.h>

void main(){
	int radius, height;
	float volume, surface;
	
	printf("\nVolume and surface calculator for a cone");
	printf("\n============================================\n");
	printf("\nEnter the radius (cm): ");
	scanf("%d", &radius);

	printf("Enter the height (cm): ");
	scanf("%d", &height);
	
	volume = M_PI * pow(radius, 2) * height / 3;
	printf("\nThe volumne of the cone is %.3f cm3\n", volume);
	
	surface = 3 * volume / (pow(radius,2) * M_PI);
	printf("\nThe surface of the cone is %.3f cm2\n", surface);

}

