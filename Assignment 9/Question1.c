 #include <stdio.h>

void PatternMaker(int iNo)
{
    int iCnt = 0 ;
    //UPDATER
    if ( iNo <0)
    {
        iNo = -iNo ;
    }

    for (iCnt = 1 ; iCnt<=iNo;iCnt++)
    {
        
        printf("*\t");
    }
    for (iCnt = 1 ; iCnt<=iNo;iCnt++)
    {
        
        printf("#\t");
    }
}
int main()
{
    int iValue = 0 ;
    printf("Enter Number: ");
    scanf("%d",&iValue);

    PatternMaker(iValue);

    return 0 ;
}

//Time Complexity : O(n)