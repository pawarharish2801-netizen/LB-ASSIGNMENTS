#include <stdio.h>
void DisplayFactor(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo ;
    }
    int iCnt=0;
    for ( iCnt=2 ; iCnt<=(iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0 )
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
   
   

    return 0 ;
}