#include <stdio.h>
#include <stdlib.h>

// Question 4: Accept three integers representing triangle side lengths.
// Determine whether they form a valid triangle.
// All sides must be positive, and the sum of any two sides must
// be greater than the third side.

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
       (long long)iSide1 + iSide2 > iSide3 &&
       (long long)iSide1 + iSide3 > iSide2 &&
       (long long)iSide2 + iSide3 > iSide1)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}