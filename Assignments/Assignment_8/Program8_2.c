
/*
    Logic Building Assignment - Question 2

    Accept a single digit number from the user
    and print it in words.

    Input  : 9
    Output : Nine

    Input  : -3
    Output : Three

    Input  : 12
    Output : Invalid Number
*/

#include <stdio.h>

void Display(int iNo)
{
    // Check whether number is a single digit
    if (iNo < -9 || iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    // Convert negative number into positive
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    // Display number in words
    switch (iNo)
    {
        case 0:
            printf("Zero\n");
            break;

        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;

        case 4:
            printf("Four\n");
            break;

        case 5:
            printf("Five\n");
            break;

        case 6:
            printf("Six\n");
            break;

        case 7:
            printf("Seven\n");
            break;

        case 8:
            printf("Eight\n");
            break;

        case 9:
            printf("Nine\n");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

