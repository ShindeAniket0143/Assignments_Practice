#include <stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo % 10) % 2 == 1)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d", iRet);

    return 0;
}