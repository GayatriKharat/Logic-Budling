
/*
    Logic Building Assignment 8- Question 1

    Write a program which accepts a number from the
    user and:
    
    1. If number is less than 50, print "Small".
    2. If number is between 50 and 100, print "Medium".
    3. If number is greater than 100, print "Large".

    Input  : 75
    Output : Medium
*/

#include <stdio.h>

void Number(int iNo)
{
    // Check whether number is Small, Medium or Large
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo <= 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
