#include <stdio.h>

long Fact(int iNo)
{
    int iCnt = 0;
    long int iFact = 0;
    
    for(iCnt = 1, iFact = 1 ; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    long iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("%d", iRet);

    return 0;
}