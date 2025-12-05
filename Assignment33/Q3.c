#include<stdio.h>
#include <stdbool.h>
#define FALSE  0 ;

typedef int BOOL ;
    
bool checkDigit(char ch)
{
    if ( ch>=48 && ch<=57)
    {
        return true ;
    }
    else
    {
        return false ;
    }

}



int main()
{
    char cValue = '\0';
    BOOL bRet = 0 ;

    printf("Enter the character \n");
    scanf("%c",&cValue);

    bRet = checkDigit(cValue) ; 

    if( bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0 ;
}