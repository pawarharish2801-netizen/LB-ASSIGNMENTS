#include <stdio.h>
int SumNonFactor(int iNo)
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
        if (iNo % iCnt == 0  )
        {   
            iFactor = iFactor + iCnt;
        }
    }
    return iFactor;

}

int main()
{
    int iValue = 0 ;
    int iRet1 = 0 , iRet2 = 0 , iDiff = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    iRet1 = SumNonFactor(iValue);
    iRet2 = SumFactor(iValue);
    iDiff = iRet2 - iRet1;
    printf("%d is the Difference of Summation of Factors and Non Factors",iDiff);
   
   

    return 0 ;
}