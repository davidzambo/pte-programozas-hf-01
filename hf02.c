#include <stdio.h>
#include <math.h>

void main(){
	int first[2];
	int second[2];
	int scalar_multiplication;

	printf("\nPlease enter the first points x coordinate: ");
	scanf("%d", &first[1]);

	printf("\nPlease enter the first points y coordinate: ");
	scanf("%d", &first[2]);

	printf("\nPlease enter the first points x coordinate: ");
	scanf("%d", &second[1]);

	printf("\nPlease enter the first points y coordinate: ");
	scanf("%d", &second[2]);

	scalar_multiplication = first[1] * second[1] + first[2] * second[2];
	printf("\nThe scalar multiplication of the given vectors is %d\n", scalar_multiplication);
}
