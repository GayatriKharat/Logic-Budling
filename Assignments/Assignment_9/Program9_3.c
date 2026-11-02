
/*
    Logic Building Assignment - Question 3

    Write a program to find the even factorial
    of a given number.

    Input  : 5
    Output : 8
             (4 * 2)

    Input  : -5
    Output : 8
             (4 * 2)

    Input  : 10
    Output : 3840
             (10 * 8 * 6 * 4 * 2)
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate even factorial
    for (i = iNo; i >= 2; i = i - 2)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}
