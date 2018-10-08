/*
	The program reads the x, y and z coords of two vectors,
	and returns the result of their vectorial multiplication
*/
#include <stdio.h>
#include <math.h>

void main(){
	float first[3], second[3], scalar_result,abs[2], cos_angle, angle;

	printf("Please enter the first vector's x coordinate: ");
	scanf("%f", &first[0]);

	printf("Please enter the first vector's y coordinate: ");
	scanf("%f", &first[1]);

	printf("Please enter the first vector's z coordinate: ");
	scanf("%f", &first[2]);
	
	printf("Please enter the second vector's x coordinate: ");
	scanf("%f", &second[0]);

	printf("Please enter the second vector's y coordinate: ");
	scanf("%f", &second[1]);

	printf("Please enter the second vector's z coordinate: ");
	scanf("%f", &second[2]);
	
	abs[0] = sqrt(pow(first[0],2) + pow(first[1],2));
	abs[1] = sqrt(pow(second[0],2) + pow(second[1],2));
	scalar_result = (first[0] * second[0]) + (first[1] * second[1]);
	cos_angle = scalar_result / (abs[0] * abs[1]);
	angle = acos(cos_angle);

	printf("\nVector 01: %f, %f", first[0], first[1]);
	printf("\nVector 02: %f, %f", second[0], second[1]);
	printf("\nAbs(Vector 01): %f", abs[0]);
	printf("\nAbs(Vector 02): %f", abs[1]);
	printf("\nScalar multiplication result of these vectors: %f", scalar_result);
	printf("\nCos(angle): %f", cos_angle);
	printf("\n\nThe angle between the given vectors is %f in radian", angle);
	printf("\nThe angle between the given vectors is %f in degree\n", (180/M_PI) * angle);
}
