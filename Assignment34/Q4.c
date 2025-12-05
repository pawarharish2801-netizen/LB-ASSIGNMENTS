#include <stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define FALSE 0
#define TRUE 1

BOOL ChkSpecial(char ch)
{
    if(ch == '!'||ch == '@'||ch == '#'||ch == '$'||ch == '%'||ch == '^'||ch == '&'||ch == '*')
    {
        return  TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);
    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }
    return 0;
}