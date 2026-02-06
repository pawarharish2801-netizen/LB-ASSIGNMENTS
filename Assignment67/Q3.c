//3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iMask = 0;
    int iResult = 0;
    
    iMask = (1 << 8) | (1 << 11);
    
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
    BOOL bRet = FALSE;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    bRet = ChkBit(iNo);
    
    if(bRet == TRUE)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("Both 9th and 12th bits are OFF\n");
    }
    
    return 0;
}