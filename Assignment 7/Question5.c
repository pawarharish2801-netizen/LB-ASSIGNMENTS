#include <stdio.h>

void PrintOddNo(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for (iCnt =1 ; iCnt<=5 ;iCnt++)
    {
        iMultiple = iNo * iCnt;
        printf("%d\t",iMultiple);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    PrintOddNo(iValue);
    return 0 ;
}
