 #include <stdio.h>

int RangeAdd(int iNo1 , int iNo2)
{
    int iCnt = 0 ;
    int iAddition = 0;

      if (iNo1>iNo2 || iNo1<0 || iNo2<0 )
    {
        return -1;     
    }

    for (iCnt = iNo1 ; iCnt<=iNo2 ; iCnt++)
    {
       
        iAddition = iAddition + iCnt ;
    }
    return iAddition ;
}
int main() 
{
   int iValue1 = 0 , iValue2 = 0 , iRet = 0;

   printf("Enter first number :");
   scanf("%d",&iValue1);

   printf("Enter second number :");
   scanf("%d",&iValue2);
   
   

    iRet =RangeAdd(iValue1,iValue2);
    if(iRet<0)
    {
        printf("Invalid Range");
    }
    else
    {
    printf("%d is the addition of the range",iRet);
    }

    return 0 ;
}
