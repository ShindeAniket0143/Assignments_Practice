#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplaySchedule(char ch)
{
    if (ch == 'A' || ch == 'a')
    {
        printf("Your Exam is at 7 AM");
        return TRUE;
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your Exam is at 8.30 AM");
        return TRUE;
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your Exam is at 9.20 AM");
        return TRUE;
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your Exam is at 10.30 AM");
        return TRUE;
    }
    else
    {
        printf("Invalid Devision");
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your Devision : ");
    scanf(" %c", &cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}