#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 1;

    while (iCnt <= iNo)
    {
        printf("%d ", iCnt * 2);
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}