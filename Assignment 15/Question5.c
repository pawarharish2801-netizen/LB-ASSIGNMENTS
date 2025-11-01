#include <stdio.h>

int SumEven(int iNo)
{
    int iCnt = 0 ;
    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 == 0)
        {
            iSum =iSum +iDigit ; 
        }
        
        iNo = iNo/10 ;
     }
     return iSum; 

}

int SumOdd(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 != 0)
        {
          iSum =iSum +iDigit ; 
        }
        
        iNo = iNo/10 ;
     }
     return iSum; 

}

int main()
{
    int iValue = 0 ;
    int iRet1  = 0 , iRet2 = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet1 = SumEven(iValue);
    iRet2 =SumOdd(iValue);

    int iDiff = 0;
    iDiff = iRet1 -iRet2;
    printf("%d is the Difference ",iDiff);
    
    return 0;
}