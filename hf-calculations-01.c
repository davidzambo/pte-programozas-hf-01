/*
 * The program reads the x and y coords of two points,
 * then returns the distance between them.
 */
#include <stdio.h>
#include <math.h>

void main(){
	int first[2];
	int second[2];
	float distance;

	printf("\nPlease enter the first point's x coordinate: ");
	scanf("%d", &first[0]);

	printf("\nPlease enter the first point's y coordinate: ");
	scanf("%d", &first[1]);

	printf("\nPlease enter the first point's x coordinate: ");
	scanf("%d", &second[0]);

	printf("\nPlease enter the first point's y coordinate: ");
	scanf("%d", &second[1]);

	distance = sqrt(pow(second[0] - first[0],2) + pow(second[1] - first[1],2));	

	printf("\nThe distance between these two points is %.3f\n", distance);
}
