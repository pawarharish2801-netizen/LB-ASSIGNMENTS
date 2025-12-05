#include <stdio.h>
#include<stdbool.h>

void Display(char ch)
{
    printf("ASCII value of '%c' in Decimal     : %d\n", ch, ch);
    printf("ASCII value of '%c' in Octal       : %o\n", ch, ch);
    printf("ASCII value of '%c' in Hexadecimal : %X\n", ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}