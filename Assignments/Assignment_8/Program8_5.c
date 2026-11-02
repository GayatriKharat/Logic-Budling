
/*
    Logic Building Assignment - Question 5

    Write a program which accepts a number from the
    user and displays its multiplication table
    in reverse order.

    Input  : 2
    Output : 20  18  16  14  12  10  8  6  4  2

    Input  : 5
    Output : 50  45  40  35  30  25  20  15  10  5

    Input  : -5
    Output : 50  45  40  35  30  25  20  15  10  5
*/

#include <stdio.h>

void TableRev(int iNo)
{
    int i = 0;

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Display multiplication table in reverse order
    for (i = 10; i >= 1; i--)
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

    TableRev(iValue);

    return 0;
}
