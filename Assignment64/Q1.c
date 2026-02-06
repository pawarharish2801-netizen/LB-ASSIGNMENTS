//1. Write a program which checks whether 15th bit is ON or OFF.
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    int iMask = 0, iResult = 0;
    iMask = 1;
    iMask = iMask <<(14);

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
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}