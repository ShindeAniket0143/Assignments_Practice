#include<stdio.h>
#include <ctype.h>

int CountWhite(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (isspace((unsigned char)*str))
        {
            count++;
        }
        str++;
    }

    return count;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}