#include <stdio.h>

void PrintOddNo(int iNo)
{
    int iCnt = 0;
    for (iCnt =1 ; iCnt<=iNo ;iCnt++)
    {
        if (iCnt % 2 != 0)
        {
        printf("%d\t",iCnt);
        }
        
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
