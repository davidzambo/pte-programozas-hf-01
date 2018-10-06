#include <stdio.h>
#include <math.h>

void main(){
	int first[2];
	int second[2];
	float distance;

	printf("\nPlease enter the first points x coordinate: ");
	scanf("%d", &first[1]);

	printf("\nPlease enter the first points y coordinate: ");
	scanf("%d", &first[2]);

	printf("\nPlease enter the first points x coordinate: ");
	scanf("%d", &second[1]);

	printf("\nPlease enter the first points y coordinate: ");
	scanf("%d", &second[2]);

	distance = sqrt(pow(second[1] - first[1],2) + pow(second[2] - first[2],2));	

	printf("\nThe distance between these two points is %.3f\n", distance);
}
