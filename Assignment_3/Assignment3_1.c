#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    else
    {
        PrintEven(iNo - 1);
        printf("%d\n", iNo * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}