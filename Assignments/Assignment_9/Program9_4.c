
/*
    Logic Building Assignment - Question 4

    Write a program to find the odd factorial
    of a given number.

    Input  : 5
    Output : 15
             (5 * 3 * 1)

    Input  : -5
    Output : 15
             (5 * 3 * 1)

    Input  : 10
    Output : 945
             (9 * 7 * 5 * 3 * 1)
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Calculate odd factorial
    for (i = iNo; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}
