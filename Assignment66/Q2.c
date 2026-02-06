//2. Write a program which accept from user and position from user and
//   off that bit. Return modified number.

#include<stdio.h>

typedef unsigned int UNIT;

UNIT OffBit(UNIT iNo, int iPos)
{
    int iMask = 0;
    int iResult = 0;
    
    if(iPos < 1 || iPos > 32)
    {
        return iNo;
    }
    
    iMask = 1 << (iPos - 1);
    
    iResult = iNo & (~iMask);
    
    return iResult;
}

int main()
{
    UNIT iNo = 0;
    int iPos = 0;
    UNIT iRet = 0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    printf("Enter the Position (1-32): ");
    scanf("%d", &iPos);
    
    iRet = OffBit(iNo, iPos);
    
    printf("Modified Number: %u\n", iRet);
    
    return 0;
}