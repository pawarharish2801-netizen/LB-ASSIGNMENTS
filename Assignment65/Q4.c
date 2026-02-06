//4. Write a program which accept one number from user and toggle 7th & 10th bit of that number. Return the modified number.
#include<stdio.h>
typedef unsigned int UNIT;

UNIT ToggleBit(UNIT iNo)
{
    int iMask = 0;
    int iResult = 0;
    iMask = 1 << 6 | 1 << 9;
    
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UNIT iNo = 0;
    UNIT iRet = 0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    iRet = ToggleBit(iNo);
    
    printf("Modified Number: %u\n", iRet);
    
    return 0;
}