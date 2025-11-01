#include <stdio.h>

void PrintOddNumber(int limit)
{
    int iCnt = 0 ;
    for(iCnt = 1 ; iCnt<=limit ; iCnt++)
    {
        if(iCnt %2 !=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0 ;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintOddNumber(iValue);

    return 0;
}