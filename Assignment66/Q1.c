//1. Write a program which accept from user and position from user and
//   check whether bit at that position is on or off. If the bit is one return TRUE
//   otherwise return FALSE.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo, int iPos)
{
    int iMask = 0;
    int iResult = 0;
    
    if(iPos < 1 || iPos > 32)
    {
        return FALSE;
    }
    
    
    iMask = 1 << (iPos - 1);
    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UNIT iNo = 0;
    int iPos = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    printf("Enter the Position (1-32): ");
    scanf("%d", &iPos);
    
    bRet = ChkBit(iNo, iPos);
    
    if(bRet == TRUE)
    {
        printf("Bit at position %d is ON\n", iPos);
    }
    else
    {
        printf("Bit at position %d is OFF\n", iPos);
    }
    
    return 0;
}