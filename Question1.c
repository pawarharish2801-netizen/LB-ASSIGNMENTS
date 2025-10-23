#include <stdio.h>
int MultiplyFactor(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo ;
    }

    int iCnt= 0;
    int iFactor =0;
    iFactor = 1 ;
    for (iCnt =1 ;iCnt <= (iNo /2); iCnt ++)
    {
        if (iNo % iCnt == 0  )
        {   
            iFactor = iFactor * iCnt;
        }
    }
    return iFactor;

}

int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet = MultiplyFactor(iValue);

    printf("%d is the Multiplication of Factor",iRet);
   
   

    return 0 ;
}