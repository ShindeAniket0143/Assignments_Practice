#include<stdio.h>

int KMtoMeter(int iKilometer)
{
    int iMeter = 0;

    if(iKilometer < 0)
    {
        iKilometer = -iKilometer;
    }

    iMeter = iKilometer * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d\n",iRet);

    return 0;
}