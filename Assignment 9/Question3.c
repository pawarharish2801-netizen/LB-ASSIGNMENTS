 #include <stdio.h>

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
    int iValue = 0, iRet = 0 ;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet =EvenFactorial(iValue);
    printf("%d is even factorial",iRet);

    return 0 ;
}
