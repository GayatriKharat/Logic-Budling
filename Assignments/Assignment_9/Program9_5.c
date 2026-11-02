
/*
    Logic Building Assignment 9- Question 5

    Write a program which returns the difference
    between even factorial and odd factorial
    of a given number.

    Input  : 5
    Output : -7
             (8 - 15)

    Input  : -5
    Output : -7
             (8 - 15)

    Input  : 10
    Output : 2895
             (3840 - 945)
*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate even factorial
    for (i = iNo; i >= 2; i--)
    {
        if (i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
    }

    // Calculate odd factorial
    for (i = iNo; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            iOddFact = iOddFact * i;
        }
    }

    // Return difference between even and odd factorial
    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
