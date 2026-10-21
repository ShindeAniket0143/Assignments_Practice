#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write Updater
    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0 ;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue); // Function call to Display

    return 0;
}