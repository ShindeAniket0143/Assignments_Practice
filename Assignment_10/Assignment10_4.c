#include<stdio.h>

double FhtoCs(float fFahrenheit)
{
    double dCelsius = 0.0;

    dCelsius = (fFahrenheit - 32) * 5 / 9;

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %lf\n", dRet);

    return 0;
}