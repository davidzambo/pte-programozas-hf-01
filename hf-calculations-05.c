/*
 * This program reads into two integers, and returns the result of their
 * addition, subtraction, multiplication, and the remainder of 
 * first number divided by the second one. 
 */
#include <stdio.h>

void main(){
	int first, second;

	printf("\nAddition, substraction, multiplication and remainder");
	printf("\n====================================================\n");
	printf("\nEnter the first number: ");
	scanf("%d", &first);
	
	printf("Enter the second number: ");
	scanf("%d", &second);

	printf("\nThe result of %d + %d = %d", first, second, (first + second));
	printf("\nThe result of %d - %d = %d", first, second, (first - second));
	printf("\nThe result of %d * %d = %d", first, second, (first * second));
	printf("\nThe remainder of %d / %d = %d\n", first, second, (first % second));

}

