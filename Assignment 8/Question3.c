 #include <stdio.h>

int Factorial(int iNo)
{

    int iCnt = 0 , iFactor = 0 ;
    iFactor = 1;

    //UPDATER
    if ( iNo <0)
    {
        iNo = -iNo ;
    }
    for (iCnt = 1 ; iCnt<=iNo;iCnt++)
    {
        iFactor = iFactor *iCnt ;
    }
    return iFactor ;
}
int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("%d is the factorial of %d", iRet, iValue);
    return 0 ;
}
