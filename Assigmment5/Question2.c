#include <stdio.h>
int CheckMax(int iNo1, int iNo2)
{
    if (iNo1 > iNo2 )
    {
        return iNo1;
    }
    else
    {
        return iNo2 ;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0 , iRet = 0;
    printf("Enter Number 1 : ");
    scanf("%d",&iValue1);
    printf("Enter Number 2 : ");
    scanf("%d",&iValue2);
    iRet = CheckMax (iValue1 , iValue2);

    printf(" %d is the maximum of %d and %d",iRet,iValue1,iValue2);
 

    return 0 ;
}
