#include <stdio.h>
#include <stdbool.h>

bool CheckZero(int iNo)
{
    int iCnt = 0 ;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;  
        }
        
        iNo = iNo/10 ;
     }
     return false; 

}

int main()
{
    int iValue = 0 ;
    bool bRet  = false ;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

     if(bRet == true)
        {
           printf("The number contain Zero");
        }
    else
        {
            printf("The number dont contain Zero");
        }
    
        return 0;
}