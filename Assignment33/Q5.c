#include<stdio.h>

void checkTime(char ch)
{
    if ( ch == 'A' || ch =='a')
    {
        printf("Exam at 7 A.M \n");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Exam at 8 A.M \n");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Exam at 9:20 A.M \n");
    }
    else if (ch == 'D' || ch=='d')
    {
        printf("Exam at 10:30 A.M \n");
    }
    else
    {
        printf ("Incorrect Division");
    }

}



int main()
{
    char cValue = '\0';
   

    printf("Enter the Division :\n");
    scanf(" %c",&cValue);

    checkTime(cValue) ; 


    return 0 ;
}