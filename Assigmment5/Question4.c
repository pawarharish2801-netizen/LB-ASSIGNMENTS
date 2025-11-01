#include <stdio.h>
void CheckIntType(int iNo)
{
    if (iNo > 0 )
    {
        printf("%d is positive",iNo);
    }

    else if(iNo<0)
    {
        printf("%d is negative",iNo);
    }
    else
    {
        printf("%d is zero",iNo);
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter Number  : ");
    scanf("%d",&iValue);
    CheckIntType(iValue);    
 

    return 0 ;
}
