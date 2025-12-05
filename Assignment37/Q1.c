#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bRet = FALSE;
    int iCnt = 0;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            bRet = TRUE;
        }
        iCnt++;
    }
    return bRet;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    
    bRet = ChkChar(arr, cValue);

    if(bRet ==  TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }
    return 0;
}