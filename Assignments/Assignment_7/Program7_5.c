
/*
    Logic Building Assignment - Question 5

    Write a program which accepts N and prints
    the first 5 multiples of N.

    Input  : 4
    Output : 4 8 12 16 20
*/

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int i = 0;

    // Print first 5 multiples of the given number
    for (i = 1; i <= 5; i++)
    {
        printf("%d\t", iNo * i);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
