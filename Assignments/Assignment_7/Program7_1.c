
/*
    Logic Building Assignment - Question 1

    Write a program which accepts a number from the
    user and prints that number of $ and * on screen.

    Input  : 5
    Output : $ * $ * $ * $ * $ *

    Input  : 3
    Output : $ * $ * $ *

    Input  : -3
    Output : $ * $ * $ *
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Print $ and * alternatively
    for (i = 1; i <= iNo; i++)
    {
        printf("$\t*\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
