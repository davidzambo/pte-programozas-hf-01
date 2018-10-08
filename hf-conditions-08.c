/*
 * This program reads two number; the maximum score and the given score, then checks
 * If the exam was successful or fail.
 */

#include <stdio.h>

void main()
{
	int max, result;
	printf("\nTest result analyzer");
	printf("\n====================");

	printf("\nPlease enter the maximum score: ");
	scanf("%d", &max);

	printf("\nPlease enter the given score: ");
	scanf("%d", &result);

	if (result >= (0.6 * max))
	{
		printf("\nSUCCESS\n");
	}
	else 
	{
		printf("\nFAIL\n");
	}
				
}

