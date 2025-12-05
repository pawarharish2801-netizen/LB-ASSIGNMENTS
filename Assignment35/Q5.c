#include<stdio.h>
void Reverse(char *str)
{
    int iCnt = 0, iLength= 0;

    for(iCnt = 0 ; str[iCnt]!='\0'; iCnt++)
    {
        iLength++;
    }
    iCnt = 0;
    for(int iCnt = iLength - 1; iCnt >= 0; iCnt--) 
    {
        printf("%c", str[iCnt]);
    }
}

int main ()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^\n]", arr );

    Reverse(arr);

    return 0;
}