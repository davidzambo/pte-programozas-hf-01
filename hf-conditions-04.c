/*
 * This program reads a one-digit long number, and print it out as word.
 */

#include <stdio.h>

void main()
{
	int num;
	printf("\nNumber-to-word converter");
	printf("\n========================\n");

	printf("\nPlease enter a one-digit long number: ");
	scanf("%1d", &num);

	switch (num)
	{
		case 0:
			printf("\nzero\n");
			break;
		case 1:
			printf("\none\n");
			break;
		case 2:
			printf("\ntwo\n");
			break;
		case 3:
			printf("\nthree\n");
			break;
		case 4:
			printf("\nfour\n");
			break;
		case 5:
			printf("\nfive\n");
			break;
		case 6:
			printf("\nsix\n");
			break;
		case 7:
			printf("\nseven\n");
			break;
		case 8:
			printf("\neight\n");
			break;
		case 9:
			printf("\nnine\n");
			break;
		default:
			printf("\nI think you entered a non one-digit number...\n");
	}
}

