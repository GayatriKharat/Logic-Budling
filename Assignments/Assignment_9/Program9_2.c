
/*
    Logic Building Assignment 9- Question 2

    Accept an amount in US dollars and return its
    corresponding value in Indian currency.

    Consider 1 USD = 70 INR.

    Input  : 10
    Output : 700

    Input  : 3
    Output : 210

    Input  : 1200
    Output : 84000
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    // Convert USD into INR
    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
