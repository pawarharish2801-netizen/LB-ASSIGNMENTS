#include <stdio.h>

void PatternMaker(int iNo)
{
    int iCnt = 0;
    for (iCnt =1 ; iCnt<=iNo ;iCnt++)
    {
        printf("$\t");
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    PatternMaker(iValue);
    return 0 ;
}
