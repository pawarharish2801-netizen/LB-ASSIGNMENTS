#include <stdio.h>

int PrintSum(int limit)
{
    if (limit<0)
    {
        return -1;
    }

    int iCnt = 0 , iSum = 0;

    for(iCnt = 1 ; iCnt<=limit ; iCnt++)
    {
        iSum = iSum + (2*iCnt) ;
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = PrintSum(iValue);
    if (iRet >0 )
    {
    printf("%d is the sum of all no",iRet);
    }
    else
    {
        printf("Invalid Number");
    }

    return 0;
}