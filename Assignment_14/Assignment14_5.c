#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactorSum = 0;
    int iNonFactorSum = 0;

    if(iNo < 1)
    {
        return 0;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactorSum = iFactorSum + iCnt;
        }
        else
        {
            iNonFactorSum = iNonFactorSum + iCnt;
        }
    }

    return iFactorSum - iNonFactorSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}