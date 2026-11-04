#include <stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo % 10) > 3 && (iNo % 10) < 7)
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

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}