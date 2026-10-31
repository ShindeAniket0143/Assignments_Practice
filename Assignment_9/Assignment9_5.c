#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iOddFact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iOddFact *= iCnt;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iEvenFact *= iCnt;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n",iRet);

    return 0;
}