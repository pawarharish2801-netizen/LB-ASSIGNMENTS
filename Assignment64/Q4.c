//4. Write a program which checks whether 7th & 8th & 9th bit is ON or OFF.
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iMask = 0, iResult = 0;
    iMask = (1 << 6) | (1 << 7) | (1 << 8);
    
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
        printf("7th, 8th and 9th bits are ON\n");
    }
    else
    {
        printf("7th, 8th and 9th bits are not all ON\n");
    }

    return 0;
}