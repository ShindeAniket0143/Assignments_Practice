#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending Point : ");
    scanf("%d",&iValue2);

    if(iValue1 <= 0 || iValue2 <= 0 || iValue1 > iValue2)
    {
        printf("Invalid Range\n");
    }
    else
    {
        iRet = RangeSum(iValue1,iValue2);
        printf("Addition of Range is : %d\n",iRet);
    }

    return EXIT_SUCCESS;
}