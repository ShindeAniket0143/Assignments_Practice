#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
    {
        printf("%d is a Leap Year.\n", iYear);
    }
    else
    {
        printf("%d is not a Leap Year.\n", iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter Year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}