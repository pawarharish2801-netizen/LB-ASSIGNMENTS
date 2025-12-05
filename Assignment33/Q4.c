#include<stdio.h>
#include <stdbool.h>
#define FALSE  0 ;

typedef int BOOL ;
    
bool checkSmall(char ch)
{
    if ( ch>=94 && ch<=122)
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

    bRet = checkSmall(cValue) ; 

    if( bRet == true)
    {
        printf("It is Small Character");
    }
    else
    {
        printf("It is not a Small Character");
    }

    return 0 ;
}