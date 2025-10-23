//QUESTION 4

#include <stdio.h>
bool Check(int iNo)
{
    if ((iNo % 5) ==0)
    {
        return true;
    }
    else
    {
       return false;
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
     scanf("%d",&iValue);
    bool bRet = false ;
    bRet = Check(iValue);

     if (bRet == true)
    {
        printf(" %d is divisible by 5",iValue);
    }
    else
    {
        printf(" %d is not divisible by 5",iValue);
    }
    
    return 0 ;
}