//QUESTION 4
#include <stdio.h>
void Display(int iNo1 ,int iNo2)
{
    int iCnt = 0 ;
    //Write Updater
    if(iNo2 <0)
    {
        iNo2 = -iNo2 ;
    }
   
    for (iCnt = 1 ; iCnt <=iNo2 ; iCnt++)
    {
        printf("%d\t",iNo1);
    }

    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter First Number : ");
    scanf("%d",&iValue1);

    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);
    return 0 ;
}