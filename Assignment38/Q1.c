#include<stdio.h>

void StrCpyRevX(char *src, char *dest)
{
    int iCnt = 0, iLength = 0;
    char temp;
    
    while(src[iCnt] != '\0')
    {
        iLength++;
        iCnt++;
    }
    iLength--;
    iCnt = 0;
    while (iLength>=0)
    {
        dest[iCnt] = src[iLength];
        iCnt++;
        iLength--;
    }
    dest[iCnt] = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    char cValue = '\0';

    printf("Enter the string: ");
    scanf("%[^'\n']s", arr);
    
    StrCpyRevX(arr, brr);
    printf("%s", brr);
    
    return 0;
}