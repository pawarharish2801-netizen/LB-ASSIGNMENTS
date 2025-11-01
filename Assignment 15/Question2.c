#include <stdio.h>


int CountOdd(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 != 0)
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

    iRet = CountOdd(iValue);

     
    printf("%d is the frequency of odd no",iRet);
    
    return 0;
}