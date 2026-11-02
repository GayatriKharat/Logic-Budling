
/*
    Logic Building Assignment - Question 3

    Write a program which accepts a number from the
    user and prints its numbers line.

    Input  : 4
    Output : -4 -3 -2 -1 0 1 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int i = 0;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Print numbers from -iNo to +iNo
    for (i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
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
