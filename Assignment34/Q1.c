#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0 ;
    char ch=0 ;
    char chHex = 0 ;
    char chOct = 0;


    for (iCnt=0  ; iCnt<=255 ; iCnt++)
    {
        printf("%d\t%c\t%x\t%o \n " ,iCnt ,ch , chHex ,chOct);
        ch++ ;
        chHex++;
        chOct++ ;
       
    }
 
}




int main()
{
    

    DisplayASCII();

    return 0 ;
}