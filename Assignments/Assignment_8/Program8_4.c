
/*
    Logic Building Assignment - Question 4

    Write a program which accepts a number from the
    user and displays its multiplication table.

    Input  : 2
    Output : 2  4  6  8  10  12  14  16  18  20

    Input  : 5
    Output : 5  10  15  20  25  30  35  40  45  50

    Input  : -5
    Output : 5  10  15  20  25  30  35  40  45  50
*/

#include <stdio.h>

void Table(int iNo)
{
    int i = 0;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Display multiplication table
    for (i = 1; i <= 10; i++)
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

    Table(iValue);

    return 0;
}
