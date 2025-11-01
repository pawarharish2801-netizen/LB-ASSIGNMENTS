#include <stdio.h>


int CheckFreq(int iNo)
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
        if(iDigit == 4)
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

    iRet = CheckFreq(iValue);

     
    printf("%d is the frequency of 4",iRet);
    
    return 0;
}