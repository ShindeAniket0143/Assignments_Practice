#include<stdio.h>

void Display ( int iNo , int iFrequency)
{
    int i = 0;
    
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue, iCount); // Function call to Display

    return 0;
}