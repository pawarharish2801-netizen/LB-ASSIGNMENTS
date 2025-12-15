#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char c = '\0';

    c = 'A';

    for(iCnt=1;iCnt<=iNo && c <= 'Z';iCnt++, c++)
    {
        printf("%c\t", c);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}