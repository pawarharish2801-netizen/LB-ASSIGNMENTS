 #include <stdio.h>

int CurrencyChanger(int iNo)
{
    int iDollar = 0 ;
    //UPDATER
    if ( iNo <0)
    {
        iNo = -iNo ;
    }
    iDollar = iNo * 70 ;
    return iDollar;
}
int main()
{
    int iValue = 0, iRet = 0 ;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet =CurrencyChanger(iValue);
    printf("%d$",iRet);

    return 0 ;
}
