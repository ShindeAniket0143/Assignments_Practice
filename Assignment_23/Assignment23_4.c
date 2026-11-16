#include<stdio.h>
#include <ctype.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (isdigit((unsigned char)*str))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return 0;
}