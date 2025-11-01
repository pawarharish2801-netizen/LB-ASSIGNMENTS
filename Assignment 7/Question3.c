#include <stdio.h>

void PrintNo(int iNo)
{
    int iCnt = 0;
    for (iCnt =-iNo ; iCnt<=iNo ;iCnt++)
    {
        printf("%d\t",iCnt);
        
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    PrintNo(iValue);
    return 0 ;
}
