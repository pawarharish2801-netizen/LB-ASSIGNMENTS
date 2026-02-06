//2. Write a program which accept two number from user and display position of common ON bits from that two numbers. 
#include<stdio.h>

typedef unsigned int UNIT;

void CommonBits(UNIT iNo1, UNIT iNo2)
{
    int iMask = 0;
    int i = 0;
    UNIT iCommon = 0;
    
    iCommon = iNo1 & iNo2;
    
    printf("Common ON bit positions: ");
    
    for(i = 1; i <= 32; i++)
    {
        iMask = 1 << (i - 1);
        
        if((iCommon & iMask) != 0)
        {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main()
{
    UNIT iNo1 = 0;
    UNIT iNo2 = 0;
    
    printf("Enter first number: ");
    scanf("%u", &iNo1);
    
    printf("Enter second number: ");
    scanf("%u", &iNo2);
    
    CommonBits(iNo1, iNo2);
    
    return 0;
}