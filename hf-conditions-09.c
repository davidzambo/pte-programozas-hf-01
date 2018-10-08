/*
 * This program reads five numbers; the x and y coords and the
 * radius of a circle, and another point's x and y coords
 * then returns if the point is within the circle or not
 */

#include <stdio.h>
#include <math.h>

void main()
{
    int circle[2], radius, point[2];
    float distance;
    printf("\nPoint in a circle analyzer");
    printf("\n==========================");

    printf("\nPlease enter the x coord of the circle: ");
    scanf("%d", &circle[0]);
    printf("\nPlease enter the y coord of the circle: ");
    scanf("%d", &circle[1]);
    printf("\nPlease enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("\nPlease enter the x coord of the point: ");
    scanf("%d", &point[0]);
    printf("\nPlease enter the y coord of the point: ");
    scanf("%d", &point[1]);

    distance = sqrt(pow((point[0] - circle[0]), 2) + pow((point[1] - circle[1]), 2));
    if (pow(distance, 2) > pow(radius, 2))
    {
        printf("\nThe point is outside of circle.\n");
    }
    else if (pow(distance, 2) == pow(radius, 2))
    {
        printf("\nThe point is on the circle.\n");
    }
    else
    {
        printf("\nThe point is out of the circle.\n");
    }
}
