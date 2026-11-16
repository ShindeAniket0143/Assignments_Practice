#include<stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Decimal : %d \n Octal : %o \n Hexadecimal : %X\n", ch, ch, ch, ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Decimal : %d \n Octal : %o \n Hexadecimal : %X\n", ch, ch, ch, ch);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}