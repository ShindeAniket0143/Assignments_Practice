#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
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