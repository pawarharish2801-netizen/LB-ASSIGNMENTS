#include <stdio.h>

int Multi(int iNo)
{
    int iCnt = 0, iProd = 0, iDigit = 0;
    iProd = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;
    }
    return iProd;
}


int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Multi(iValue);

    printf("%d", iRet);

    return 0;
}