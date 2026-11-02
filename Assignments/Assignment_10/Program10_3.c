
/*
    Logic Building Assignment 10- Question 3

    Write a program which accepts distance in
    kilometres and converts it into metres.

    1 Kilometre = 1000 Metres

    Input  : 5
    Output : 5000

    Input  : 12
    Output : 12000
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    // Convert kilometres into metres
    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometres: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in metres is %d\n", iRet);

    return 0;
}
