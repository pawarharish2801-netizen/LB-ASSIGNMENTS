#include <stdio.h>
int SumFactor(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo ;
    }

    int iCnt= 0;
    int iFactor =0;
    iFactor = 0 ;
    for (iCnt =1 ;iCnt < iNo; iCnt ++)
    {
        if (iNo % iCnt != 0  )
        {   
            iFactor = iFactor + iCnt;
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
    iRet = SumFactor(iValue);

    printf("%d is the Summation of Factor",iRet);
   
   

    return 0 ;
}