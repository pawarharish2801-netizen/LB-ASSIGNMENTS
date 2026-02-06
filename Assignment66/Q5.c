//5. Write a program which accept from user and position from user and
//   toggle contents of first and last nibble of the number.
//   Return modified number.(Nibble is group of 4 bits)

#include<stdio.h>

typedef unsigned int UNIT;

UNIT ToggleNibble(UNIT iNo)
{
    int iMask = 0;
    int iResult = 0;
    
    iMask = ((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3)) | ((1 << 28) | (1 << 29) | (1 << 30) | (1 << 31));
    
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UNIT iNo = 0;
    UNIT iRet = 0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    iRet = ToggleNibble(iNo);
    
    printf("Modified Number: %u\n", iRet);
    
    return 0;
}