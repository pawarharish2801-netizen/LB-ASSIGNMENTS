//5. Write a program which accept one number from user and range of positions from user.
//   Toggle all bits from that range.

#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleRange(UNIT iNo, int iStart, int iEnd)
{
    int iMask = 0;
    int iResult = 0;
    int i = 0;
    
    if(iStart < 1 || iStart > 32 || iEnd < 1 || iEnd > 32)
    {
        printf("Invalid positions!\n");
        return iNo;
    }
    
    if(iStart > iEnd)
    {
        int temp = iStart;
        iStart = iEnd;
        iEnd = temp;
    }
    
    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UNIT iNo = 0;
    int iStart = 0, iEnd = 0;
    UNIT iRet = 0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    printf("Enter start position (1-32): ");
    scanf("%d", &iStart);
    
    printf("Enter end position (1-32): ");
    scanf("%d", &iEnd);
    
    iRet = ToggleRange(iNo, iStart, iEnd);
    
    printf("Modified Number: %u\n", iRet);
    
    return 0;
}