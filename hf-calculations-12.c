/* 
 * This program simulates five dice rolls
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	
	printf("\nDice roll simulator");
	printf("\n===================\n");

	for (i = 0; i < 5; i++)
	{
		printf("\n%d. rolling: %d", i + 1, (rand() % 6) + 1 );
	}
	
	printf("\n");
}
