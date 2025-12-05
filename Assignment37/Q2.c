#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0, iCount =0;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
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

    
    iRet = CountChar(arr, cValue);
    printf("Character frequency is %d", iRet);
    
    return 0;
}