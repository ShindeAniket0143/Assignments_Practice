#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please Enter Number : ");
    scanf("%d", &iValue);

    bRet = (iValue > 100) ? TRUE : FALSE;

    if(bRet == TRUE)
    {
        printf("Greater", iValue);
    }
    else
    {
        printf("Smaller", iValue);
    }

    return 0;
}