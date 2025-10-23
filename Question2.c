//QUESTION 2
#include <stdio.h>
void Accept(int iNo)
{
    //Write Updater
    if(iNo <0)
    {
        iNo = -iNo;
    }

    while (iNo>0)
    {
        printf("* \n");
        iNo--;
    }
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0 ;
}