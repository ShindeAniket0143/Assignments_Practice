#include<stdio.h>

int TableRev(int iNo)
{
    int iCounter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCounter = 10; iCounter >= 1; iCounter--)
    {
        printf("%d\t", iNo * iCounter);
    }

    printf("\n");

    return 0;
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}