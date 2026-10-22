#include <stdio.h>
#include <stdlib.h>

// Question 5: Accept an employee's monthly salary and completed
// years of service. Calculate the bonus using these rules:
// More than 10 years: 15% of salary
// 5 to 10 years: 10% of salary
// Less than 5 years: 5% of salary
// Salary must be positive and years of service cannot be negative.

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input\n");
        return;
    }

    if(iYears > 10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if(iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}