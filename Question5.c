//QUESTION 3
#include <stdio.h>
#include <stdbool.h>
bool CheckEven(int iNo)
{
    //Write Updater
    if(iNo % 2 == 0)
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
    bRet = CheckEven(iValue);
    if (bRet == true)
    {
        printf(" %d is even",iValue);
    }
    else
    {
        printf(" %d is odd",iValue);
    }

    return 0 ;
}