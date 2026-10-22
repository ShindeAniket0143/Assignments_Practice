#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("%d is a positive number.\n", iValue);
    }
    else if(iValue < 0)
    {
        printf("%d is a negative number.\n", iValue);
    }
    else
    {
        printf("The number is zero.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}