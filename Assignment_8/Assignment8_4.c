#include<stdio.h>

int Table(int iNo)
{
    int iCounter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCounter = 1; iCounter <= 10; iCounter++)
    {
        printf("%d\t", iNo * iCounter);
    }

    return 0;
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}