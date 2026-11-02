
/*
    Logic Building Assignment 10 - Question 1

    Write a program which accepts the radius of a
    circle from the user and calculates its area.

    Consider the value of PI as 3.14.

    Formula:
    Area = PI * Radius * Radius

    Input  : 5.3
    Output : 88.2026

    Input  : 10.4
    Output : 339.6224
*/

#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    // Calculate area of circle
    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4lf\n", dRet);

    return 0;
}
