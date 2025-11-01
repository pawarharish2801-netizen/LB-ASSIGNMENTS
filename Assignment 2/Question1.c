//QUESTION 1
#include <stdio.h>
void Accept(int iNo)
{
    int i = 0;
    i=1;
    //Write Updater
    if(iNo <0)
    {
        iNo = -iNo;
    }

    while ( i<=iNo)
    {
        printf("* \n");
        i++;
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