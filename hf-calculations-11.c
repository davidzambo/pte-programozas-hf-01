/*
 * This program reads an integer as seconds, then returns it
 * as minutes and hours.
 */

#include <stdio.h>

void main(){
	int seconds, minutes = 0, hours = 0;

	printf("\nSeconds converter");
	printf("\n=================\n");

	printf("Please enter the number of seconds: ");
	scanf("%d", &seconds);

	hours = seconds / 3600;
	seconds -= hours * 3600;

	minutes = seconds / 60;
	seconds -= minutes * 60;

	printf("\nThe seconds, you've entered can be converted to %d hours, %d minutes and %d seconds.\n", 
			hours, minutes, seconds);
}

