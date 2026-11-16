#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("ASCII Table:\n");
    printf("Character\tDecimal\tHexadecimal\n");
    printf("-----------------------------------\n");

    for (i = 0; i <= 127; i++)
    {
        printf("%c\t\t%d\t%X\n", i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}