#include <stdio.h>


int MultiplyDigit(int iNo)
{
    int iDigit = 0;
    int iMultiplication = 0;
    iMultiplication = 1;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10 ;
        if(iDigit ==0)
        {
            iDigit =1;
        }
        iMultiplication = iMultiplication * iDigit;
     }
     return iMultiplication; 

}

int main()
{
    int iValue = 0 ;
    int iRet  = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiplyDigit(iValue);

     
    printf("%d is the Multiplication ",iRet);
    
    return 0;
}