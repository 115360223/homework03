#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

char changeCase(char ch)
{
    if (islower(ch))
    {
        return ch - 32;
    }
    else if (isupper(ch))
    {
        return ch + 32;
    }
    return ch;
}

int main(void)
{
    char input;
    printf("Please enter a letter:");
    scanf(" %c", &input);
    printf("result:%c\n", changeCase(input));
    return 0;
}