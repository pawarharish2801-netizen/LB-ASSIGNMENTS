#include <stdio.h>
float Percent(int iNo1, int iNo2)
{   
    float fPercent= 0.0;
    fPercent =((float)iNo1 / iNo2 )*100 ;
    return fPercent;
}   

int main()
{
    int iValue1= 0 ,iValue2 = 0 ;
    float fRet = 0;

    printf("Enter Obtained Marks : ");
    scanf("%d",&iValue1 );

    printf("Enter Total Marks : ");
    scanf("%d",&iValue2);
    
    fRet = Percent(iValue1, iValue2);

    printf("Percentage is: %.2f%%\n", fRet);
   


   
    return 0 ;
}
