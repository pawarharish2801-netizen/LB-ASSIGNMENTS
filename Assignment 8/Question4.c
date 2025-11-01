 #include <stdio.h>

void TableMaker(int iNo)
{
    int iCnt = 0 , iFactor = 0 ;
    iFactor = 1;

    //UPDATER
    if ( iNo <0)
    {
        iNo = -iNo ;
    }

    for (iCnt = 1 ; iCnt<=10;iCnt++)
    {
        iFactor = iNo * iCnt ;
        printf("%d\t",iFactor);
    }
}
int main()
{
    int iValue = 0 ;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    TableMaker(iValue);

    return 0 ;
}
