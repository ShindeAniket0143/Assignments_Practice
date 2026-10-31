#include<stdio.h>

int factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        return iNo * factorial(iNo - 1);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = factorial(iValue);

    printf("Factorial of number is : %d\n",iRet);

    return 0;
}