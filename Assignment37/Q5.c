#include<stdio.h>

void StrRevX(char *str)
{
    int iCnt = 0, iLength = 0;
    char temp;
    
    while(str[iCnt] != '\0')
    {
        iLength++;
        iCnt++;
    }
    iLength--;
    iCnt = 0;
    while (iCnt < iLength)
    {
        temp = str[iCnt];
        str[iCnt] = str[iLength];
        str[iLength] = temp;

        iCnt++;
        iLength--;
    }

}

int main()
{
    char arr[20];
    char cValue = '\0';

    printf("Enter the string: ");
    scanf("%[^'\n']s", arr);
    
    StrRevX(arr);
    printf("Modified String is: %s", arr);
    
    return 0;
}
