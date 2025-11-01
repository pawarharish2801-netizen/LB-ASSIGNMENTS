#include <stdio.h>


int Count(int iNo)
{
    int iCnt = 0 ;
    int iDigit = 0;
    int iFrequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit <=6)
        {
            iFrequency =iFrequency +1 ; 
        }
        
        iNo = iNo/10 ;
     }
     return iFrequency; 

}

int main()
{
    int iValue = 0 ;
    int iRet  = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

     
    printf("%d is the frequency of no. less than 6",iRet);
    
    return 0;
}