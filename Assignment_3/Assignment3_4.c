#include <stdio.h>

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z')
    {
        cValue -= ('a' - 'A');
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue += ('a' - 'A');
    }

    printf("Converted character: %c\n", cValue);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}