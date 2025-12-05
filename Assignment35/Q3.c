#include <stdio.h>

int CountCapital(char* str)
{
    int iCntSmall = 0, iCntCapital = 0;
    while (*str!= '\0')
    {
        if(*str >= 'a'&&*str <= 'z')
        {
            iCntSmall++;
        }
        else if(*str >= 'A'&&*str <= 'Z')
        {
            iCntCapital++;
        }
        str++;
    }
  
    return (iCntSmall - iCntCapital);
}

int main()
{
    char Arr[20]= {'\0'};
    int iRet = 0;

    printf("Enter your string:\n");
    scanf("%[^'\n']s", Arr);
   
    iRet = CountCapital(Arr);
    
    printf("%d\n", iRet);

    return 0;
}