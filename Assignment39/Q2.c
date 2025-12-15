#include <stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    Display();

    return 0;
}