
/*
    Logic Building Assignment 10- Question 2

    Write a program which accepts the width and height
    of a rectangle from the user and calculates its area.

    Formula:
    Area = Width * Height

    Input  : 5.3  9.78
    Output : 51.834
*/

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    // Calculate area of rectangle
    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf\n", dRet);

    return 0;
}
