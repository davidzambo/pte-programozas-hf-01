/*
 * The program reads the x and y coords of two vectors,
 * then returns the result of their scalar multiplication 
 */
#include <stdio.h>
#include <math.h>

void main(){
	int first[2];
	int second[2];
	int scalar_multiplication;

	printf("\nPlease enter the first points x coordinate: ");
	scanf("%d", &first[0]);

	printf("Please enter the first points y coordinate: ");
	scanf("%d", &first[1]);

	printf("Please enter the first points x coordinate: ");
	scanf("%d", &second[0]);

	printf("Please enter the first points y coordinate: ");
	scanf("%d", &second[1]);

	scalar_multiplication = first[0] * second[0] + first[1] * second[1];
	printf("\nThe scalar multiplication of the given vectors is %d\n", scalar_multiplication);
}
