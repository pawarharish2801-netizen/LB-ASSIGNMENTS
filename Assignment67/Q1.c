//1. Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator.

#include<stdio.h>

typedef unsigned int UNIT;
int CountOne(UNIT iNo)
{
    int iCount = 0;
    int iMask = 1;
    int i = 0;
    
    for(i = 0; i < 32; i++)
    {
        iMask = 1 << i;
        
        if((iNo & iMask) != 0)
        {
            iCount++;
        }
    }
    
    return iCount;
}

int main()
{
    UNIT iNo = 0;
    int iRet = 0;
    
    printf("Enter the Number: ");
    scanf("%u", &iNo);
    
    iRet = CountOne(iNo);
    
    printf("Number of ON bits: %d\n", iRet);
    
    return 0;
}