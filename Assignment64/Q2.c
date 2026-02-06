//2. Write a program which checks whether 5th & 18th bit is ON or OFF.
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iMask = 0, iResult = 0;
    
    iMask = (1 << 4) | (1 << 17);
    
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
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter the Number: ");
    scanf("%d", &iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("5th and 18th bits are ON\n");
    }
    else
    {
        printf("5th and 18th bits are not both ON\n");
    }

    return 0;
}