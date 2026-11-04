#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iProduct = 1;

    if (iNo == 0)
    {
        return 0;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 0)
        {
            iDigit = -iDigit;
        }
        if (iDigit != 0)
        {
            iProduct = iProduct * iDigit;
        }
        iNo = iNo / 10;
    }

    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}