#include<stdio.h>
#include <stdbool.h>
#define FALSE  0 ;

typedef int BOOL ;
    
bool checkAlpha(char ch)
{
    if ( ch>=65 && ch<=90 || ch>=97 && ch<=122)
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

    bRet = checkAlpha(cValue) ; 

    if( bRet == true)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0 ;
}