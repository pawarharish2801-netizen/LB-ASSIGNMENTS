#include<stdio.h>

void strlwrx(char *str)
{
    int iCnt =0;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]>='A'&&str[iCnt]<='Z')
        {
            str[iCnt] = str[iCnt] + 32; 
        }
        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String: ");
    scanf("%[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is:  %s",arr);

    return 0;
}