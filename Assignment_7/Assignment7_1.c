#include<stdio.h>

void Pattern(int iNo)
{
    int j = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(j = 1; j <= iNo; j++)
    {
        printf("$     *      ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}