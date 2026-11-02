
/*
    Logic Building Assignment 10 - Question 5

    Write a program which accepts area in square feet
    and converts it into square metres.

    1 Square Feet = 0.0929 Square Metres

    Input  : 5
    Output : 0.464515

    Input  : 7
    Output : 0.650321
*/

#include <stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    // Convert square feet into square metres
    dMeter = iValue * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square metres is %lf\n", dRet);

    return 0;
}
