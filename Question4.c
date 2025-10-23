#include <stdio.h>
void ChangeCase(char CValue)
{
    if( CValue>='a' && CValue<'z')
    {
        CValue = CValue -32 ;
    }
    printf("%c",CValue);
   
}

int main()
{
    char cValue = '\0' ;
    printf("Enter character : ");
    scanf("%c",&cValue);
    ChangeCase(cValue);
 
   
   

    return 0 ;
}