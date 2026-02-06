//4. Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo, int iPos1, int iPos2)
{
    int iMask = 0;
    int iResult = 0;
    
    if(iPos1 < 1 || iPos1 > 32 || iPos2 < 1 || iPos2 > 32)
    {
        return FALSE;
    }
    
    iMask = (1 << (iPos1 - 1)) | (1 << (iPos2 - 1));
    
    iResult = iNo & iMask;
    
    if(iResult != 0)
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
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    printf("Enter first position (1-32): ");
    scanf("%d", &iPos1);
    
    printf("Enter second position (1-32): ");
    scanf("%d", &iPos2);
    
    bRet = ChkBit(iNo, iPos1, iPos2);
    
    if(bRet == TRUE)
    {
        printf("Bit at position %d or %d is ON\n", iPos1, iPos2);
    }
    else
    {
        printf("Both bits at positions %d and %d are OFF\n", iPos1, iPos2);
    }
    
    return 0;
}