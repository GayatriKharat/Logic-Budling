
/*
    Logic Building Assignment 10 - Question 4

    Write a program which accepts temperature in
    Fahrenheit and converts it into Celsius.

    Formula:
    Celsius = (Fahrenheit - 32) * (5.0 / 9.0)

    Input  : 10
    Output : -12.2222

    Input  : 34
    Output : 1.11111
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    // Convert Fahrenheit into Celsius
    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %.5lf\n", dRet);

    return 0;
}
