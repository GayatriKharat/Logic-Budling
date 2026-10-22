#include <stdio.h>
#include <stdlib.h>

// Question 1: Accept the number of electricity units consumed and
// calculate the total bill using slab-wise rates.
// First 100 units: Rs. 5/unit
// Next 100 units: Rs. 7/unit
// Above 200 units: Rs. 10/unit
// Negative unit consumption is invalid.

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid Units\n");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f\n", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7)
                + ((iUnits - 200) * 10);
        printf("Bill = %.2f\n", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}