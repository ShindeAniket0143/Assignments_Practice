#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;

    if (fAmount > 5000.0f)
    {
        fDiscount = fAmount * 0.2f; // 20% discount
    }
    else if (fAmount >= 1000.0f)
    {
        fDiscount = fAmount * 0.1f; // 10% discount
    }

    printf("Payable Amount : %.2f\n", fAmount - fDiscount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}