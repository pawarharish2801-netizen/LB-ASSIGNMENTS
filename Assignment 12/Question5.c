#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo)
{
        if(iNo % 5 ==0)
        {
            return true  ;  
        }
        else
        {
            return false;
        }
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;


    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if (bRet == true)
    {
        printf("The Number is Divisible by 5");
    }
    else
    {
        
        printf("The Number is not Divisible by 5");
    
    }
    return 0;
}