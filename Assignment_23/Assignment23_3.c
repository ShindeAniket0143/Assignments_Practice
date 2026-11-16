#include<stdio.h>
#include <ctype.h>

void strtogglex(char *str)
{
    int first = 1;

    while (*str != '\0')
    {
        if (isspace((unsigned char)*str))
        {
            first = 1;
        }
        else if (first)
        {
            *str = (char)tolower((unsigned char)*str);
            first = 0;
        }
        else
        {
            *str = (char)toupper((unsigned char)*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    printf("Modified String is %s\n", arr);

    return 0;
}