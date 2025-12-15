#include <stdio.h>

int Strlen(char * str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt]!= '\0')
    {
        iCount++;
        iCnt++;    
    }
    return iCount;
}


int main()
{
    int iRet = 0;
    char arr[20];
    printf("Enter string: ");
    scanf("%[^'\n']s", &arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}