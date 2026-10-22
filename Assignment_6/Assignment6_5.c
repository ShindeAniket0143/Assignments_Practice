#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (iYears > 10)
    {
        fBonus = fSalary * 0.15f; // 15% bonus
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10f; // 10% bonus
    }
    else if (iYears <= 5)
    {
        fBonus = fSalary * 0.05f; // 5% bonus
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service : ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}