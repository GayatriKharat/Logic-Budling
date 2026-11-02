
/*
    Logic Building Assignment - Question 2

    Write a program which accepts a number from the
    user and prints numbers till that number.

    Input  : 8
    Output : 1 2 3 4 5 6 7 8
*/

#include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    // Print numbers from 1 to the given number
    for (i = 1; i <= iNo; i++)
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
