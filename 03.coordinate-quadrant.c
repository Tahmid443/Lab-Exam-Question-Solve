/*
Coordinate Quadrant Identification
___________________________________
Write a C program to accept a coordinate point in an XY
coordinate system and determine in which quadrant the
coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
*/
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("(%d,%d) lies in the first quadrant", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("(%d,%d) lies in the second quadrant", x, y);
    }
    if (x < 0 && y < 0)
    {
        printf("(%d,%d) lies in the third quadrant", x, y);
    }
    if (x > 0 && y < 0)
    {
        printf("(%d,%d) lies in the fourth quadrant", x, y);
    }
    if (x == 0 && y == 0)
    {
        printf("(%d,%d) is the center point", x, y);
    }
    if (x == 0 && (y > 0 || y < 0))
    {
        printf("(%d,%d) lies in the y axis", x, y);
    }
    if ((x > 0 || x < 0) && y == 0)
    {
        printf("(%d,%d) lies in the x axis", x, y);
    }
    return 0;
}