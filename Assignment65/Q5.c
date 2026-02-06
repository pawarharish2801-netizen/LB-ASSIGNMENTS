//5. Write a program which accept one number from user and on its 4 first bits. Return the modified number.
#include<stdio.h>
typedef unsigned int UNIT;

UNIT ONBit(UNIT iNo)
{
    int iMask = 0;
    int iResult = 0;
    
    iMask = (1 << 0) | (1 << 1) | (1 << 2) | (1 << 3);
    iResult = iNo | iMask;
    
    return iResult;
}

int main()
{
    UNIT iNo = 0;
    UNIT iRet = 0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    iRet = ONBit(iNo);
    
    printf("Modified Number: %u\n", iRet);
    
    return 0;
}