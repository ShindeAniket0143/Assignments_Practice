#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    ChkEven(iValue); // Function call to ChkEven

    return 0;
}