#include <stdio.h>
#include <stdbool.h>
bool CheckVowel(char CValue)
{
    if( CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' || CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U'  )
    {
        return true ;
    }
    else
    {
        return false;
    }
  
   
}

int main()
{
    char cValue = '\0' ;
    printf("Enter character : ");
    scanf("%c",&cValue);
    bool bRet = false ;
    bRet = CheckVowel(cValue);
    if (bRet ==true)
        {
            printf("%c is vowel",cValue);
        }
    else    
        {
            printf("%c is consonant",cValue);
        }
 
   
   

    return 0 ;
}