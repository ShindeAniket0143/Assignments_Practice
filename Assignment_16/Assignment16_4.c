#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iRow - i + 1);
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0 , iValue2 = 0;

    printf("Enter Number of Rows and Columns : ");
    scanf("%d %d", &iValue, &iValue2);

    Pattern(iValue, iValue2);

    return 0;
}