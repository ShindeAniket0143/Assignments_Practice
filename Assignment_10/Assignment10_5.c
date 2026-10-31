#include<stdio.h>

double SquareMeter(int iSquareFeet)
{
    double dSquareMeter = 0.0;

    if(iSquareFeet < 0)
    {
        iSquareFeet = -iSquareFeet;
    }

    dSquareMeter = iSquareFeet * 0.092903;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf\n", dRet);

    return 0;
}