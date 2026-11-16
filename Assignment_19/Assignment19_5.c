#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        /* Indent each row to form a right-aligned, upside-down staircase. */
        for(j = 1; j < i; j++)
        {
            printf("\t");
        }

        /* Start each row with its row number. */
        for(j = 1; j <= iCol - i + 1; j++)
        {
            printf("%d\t", i + j - 1);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}