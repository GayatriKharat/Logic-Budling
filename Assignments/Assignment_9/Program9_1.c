
/*
    Logic Building Assignment 9 - Question 1

    Write a program which accepts a number from the
    user and displays the below pattern.

    Input  : 5
    Output : * * * * * # # # # #

    Input  : 6
    Output : * * * * * * # # # # # #

    Input  : -5
    Output : * * * * * # # # # #

    Input  : 2
    Output : * * # #
*/

#include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Display stars
    for (i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }

    // Display hashes
    for (i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
