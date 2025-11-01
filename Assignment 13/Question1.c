#include <stdio.h>

void PrintNumber(int limit)
{
    int iCnt = 0 ;
    for(iCnt = 1 ; iCnt<=limit ; iCnt++)
    {
            printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0 ;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintNumber(iValue);

    return 0;
}