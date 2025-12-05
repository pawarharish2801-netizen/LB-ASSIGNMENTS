#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            break;
        }
        iCnt++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    
    iRet = FirstChar(arr, cValue);
    printf("Character location is %d", iRet);
    
    return 0;
}