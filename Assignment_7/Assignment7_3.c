#include<stdio.h>

void Display(int iNo)
{
    long long iCnt = 0;
    long long iLimit = iNo;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = -iLimit; iCnt <= iLimit; iCnt++)
    {
        printf("%lld", iCnt);
        if(iCnt < iLimit)
        {
            printf("\t");
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}