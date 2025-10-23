//QUESTION 3
#include <stdio.h>
void Display(int iNo)
{
    //Write Updater
    if(iNo <10)
    {
        printf("Hello ");
    }
    else
    {
        printf("Demo"); 
    }

    
}

int main()
{
    int iValue = 0 ;
    printf("Enter Number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0 ;
}