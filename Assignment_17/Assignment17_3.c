#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        iNum = 1;
        ch = 'a';
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 1)
            {
                printf("%c\t", ch++);
            }
            else
            {
                printf("%d\t", iNum++);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}