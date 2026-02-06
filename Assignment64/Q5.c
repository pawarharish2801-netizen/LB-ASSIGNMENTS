//5. Write a program which checks whether first and last bit is ON or OFF.
//   First bit means bit number 1 and last bit means bit number 32.
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iMask = 0, iResult = 0;
    iMask = (1 << 0) | (1 << 31);
    
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
    BOOL bRet = FALSE;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("First and last bits are ON\n");
    }
    else
    {
        printf("First and last bits are not both ON\n");
    }

    return 0;
}