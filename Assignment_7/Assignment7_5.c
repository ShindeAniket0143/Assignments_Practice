#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 1;

    while(iCnt <= 5)
    {
        printf("%d\t", iNo * iCnt);
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}