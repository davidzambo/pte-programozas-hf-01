/*
 * This program reads numbers as grades, then returns them in written format
 * until user enters 0.
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int grade;
    printf("\nGrade converter");
    printf("\n===============");

    do {
        grade = 0;
        printf("\nPlease enter a grade: ");
        scanf("%1d", &grade);

        switch (grade) {
            case 1:
                printf("elegtelen\n");
                break;
            case 2:
                printf("elegseges\n");
                break;
            case 3:
                printf("kozepes\n");
                break;
            case 4:
                printf("jo\n");
                break;
            case 5:
                printf("jeles\n");
                break;
            case 0:
                printf("\nExit...\n");
                break;
            default:
                printf("Unknown input!\n");
                break;
        }
    } while (grade != 0);
}
