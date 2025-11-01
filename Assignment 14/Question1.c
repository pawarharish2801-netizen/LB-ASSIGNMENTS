#include <stdio.h>

void PrintDigit(int iNo)
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
        iNo = iNo /10;
        printf("%d\n",iDigit);
     } 
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintDigit(iValue);

    return 0;
}