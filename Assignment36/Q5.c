#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt =0, iCount = 0;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]==' ')
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
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);
    return 0;
}