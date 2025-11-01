#include <stdio.h>

void NoChecker(int iNo)
{
    if (iNo<=50 )
    {
        printf("Small");
    }
    else if(iNo =50 && iNo<100)
    {
        printf("Medium");
    }
    else 
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number: ");
    scanf("%d",&iValue);
    
    NoChecker(iValue);
    return 0 ;
}
