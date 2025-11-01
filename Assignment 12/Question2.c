#include <stdio.h>

int FactorCount(int iNo)
{
    int iCnt = 0 , iCount = 0;
    for(iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
    {
        if(iNo % iCnt ==0)
        {
            iCount = iCount+1;      
        }
    }
    return iCount ;
}

int main()
{
    int iValue = 0 ,iRet = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorCount(iValue);

    printf("%d are the total no of factors",iRet);

    return 0;
}