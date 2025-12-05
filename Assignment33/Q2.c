#include<stdio.h>
#include <stdbool.h>
#define FALSE  0 ;

typedef int BOOL ;
    
bool checkCapital(char ch)
{
    if ( ch>=65 && ch<=90)
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

    bRet = checkCapital(cValue) ; 

    if( bRet == true)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital character");
    }

    return 0 ;
}