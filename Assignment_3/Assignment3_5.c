#include <stdio.h>

char DisplayVowel(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue += ('a' - 'A');
    }

    return cValue == 'a' || cValue == 'e' || cValue == 'i' ||
           cValue == 'o' || cValue == 'u';
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    printf("%s\n", DisplayVowel(cValue) ? "TRUE" : "FALSE");

    return 0;
}