#include <stdio.h>

int FactorSum(int iNo)
{
    int iCnt = 0 , iSum = 0;
    for(iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iSum = iSum +iCnt;      
        }
    }
    return iSum ;
}

int main()
{
    int iValue = 0 ,iRet = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorSum(iValue);

    printf("%d is the sum factors",iRet);

    return 0;
}