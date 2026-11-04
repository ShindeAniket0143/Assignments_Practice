#include<stdio.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }

    int iResult = 1;

    if (iNo1 != 0)
    {
        iResult = iResult * iNo1;
    }

    if (iNo2 != 0)
    {
        iResult = iResult * iNo2;
    }

    if (iNo3 != 0)
    {
        iResult = iResult * iNo3;
    }

    return iResult;
}

int main()
{
    int iValue = 0 , iValue2 = 0 , iValue3 = 0 , iRet = 0;

    printf("Please Enter three Numbers : ");
    scanf("%d %d %d", &iValue, &iValue2, &iValue3);

    iRet = Multiply(iValue, iValue2, iValue3);

    printf("multiplication is : %d", iRet);

    return 0;
}