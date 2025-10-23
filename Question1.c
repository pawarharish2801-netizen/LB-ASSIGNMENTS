#include <stdio.h>
void PrintEven(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo ;
    }
    int iCnt = 0 ,iPrt =0;
    iCnt = 1 ;
    iPrt =2;
    while ( iCnt<=iNo  )
    {
        printf("%d\t",iPrt); 
        iPrt = iPrt +2;
        iCnt++;
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    PrintEven(iValue);
   
   

    return 0 ;
}