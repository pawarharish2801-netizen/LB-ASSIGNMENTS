#include <stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CountCapital(char* str)
{
    BOOL bRet = FALSE;
    while (*str!= '\0')
    {
        if(*str == 'a'||*str == 'e'||*str == 'i'||*str == 'o'||*str == 'u')
        {
            bRet = TRUE;
            break;
        }
        str++;
    }
  
    return bRet ;
}

int main()
{
    char Arr[20]= {'\0'};
    BOOL bRet = FALSE;

    printf("Enter your string:\n");
    scanf("%[^'\n']s", Arr);
   
    bRet = CountCapital(Arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}