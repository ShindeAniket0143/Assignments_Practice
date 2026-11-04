#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo)
{
    if(iNo == 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0 , iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please Enter two Numbers : ");
    scanf("%d %d", &iValue, &iValue2);

    bRet = (iValue == iValue2) ? TRUE : FALSE;

    if(bRet == TRUE)
    {
        printf("Equal", iValue);
    }
    else
    {
        printf("Not Equal", iValue);
    }

    return 0;
}