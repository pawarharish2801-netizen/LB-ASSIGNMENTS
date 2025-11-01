 #include <stdio.h>

int OddFactorial(int iNo)
{

    //UPDATER
    if ( iNo <0)
    {
        iNo = -iNo ;
    }

    int iCnt = 0 , iFactorial = 0;
    iFactorial = 1;
    for (iCnt =1 ; iCnt <=iNo ;iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            iFactorial = iFactorial * iCnt ;
        }
    }
    return iFactorial;
}

int EvenFactorial(int iNo)
{

    //UPDATER
    if ( iNo <0)
    {
        iNo = -iNo ;
    }

    int iCnt = 0 , iFactorial = 0;
    iFactorial = 1;
    for (iCnt =1 ; iCnt <=iNo ;iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iFactorial = iFactorial * iCnt ;
        }
    }
    return iFactorial;
}
int main()
{
    int iValue = 0, iRet1 = 0 , iRet2 = 0 , iDiff =0;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet1 =OddFactorial(iValue);
    iRet2 =EvenFactorial(iValue);

    iDiff = iRet2 -iRet1;


    printf("%d is Difference of Odd Factorial and Even Factorial",iDiff);

    return 0 ;
}
