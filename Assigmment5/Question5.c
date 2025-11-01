#include <stdio.h>
int CheckMax(int iNo1, int iNo2 , int  iNo3)
{
   if (iNo1 > iNo2)
   {
        if (iNo1 > iNo3)
        {
            return iNo1;
        }
        else
        {
            return iNo3;
        }
   }
   else
   {
         if (iNo2 > iNo3)
        {
            return iNo2;
        }
        else
        {
            return iNo3;
        }
   }

}
int main()
{
    int iValue1 = 0, iValue2 = 0 ,iValue3 = 0 , iRet = 0;
    printf("Enter Number 1 : ");
    scanf("%d",&iValue1);
    printf("Enter Number 2 : ");
    scanf("%d",&iValue2);
     printf("Enter Number 3 : ");
    scanf("%d",&iValue3);
    iRet = CheckMax(iValue1 , iValue2, iValue3);

    printf(" %d is the maximum of %d, %d and %d",iRet,iValue1,iValue2,iValue3 );
 

    return 0 ;
}
