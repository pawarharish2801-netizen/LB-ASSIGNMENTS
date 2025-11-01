#include <stdio.h>
#include <stdbool.h>
bool CheckLeapYear(int iNo)
{
    if (iNo % 4 ==0 )
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int main()
{
    int iValue = 0 ;
    bool bRet = false;
    printf("Enter Year : ");
    scanf("%d",&iValue);
    bRet = CheckLeapYear(iValue);
    if(bRet == true)
    {
        printf("%d is Leap Year",iValue);
    }
    else 
    {
        printf("%d is not a Leap Year",iValue);
    }

    return 0 ;
}