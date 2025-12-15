#include <stdio.h>

void Display()
{
    int iCnt = 0;
    char c = '\0';

    c = 'A';

    for(iCnt=1;iCnt<=6 && c <= 'Z';iCnt++, c++)
    {
        printf("%c\t", c);
    }
}

int main()
{
    Display();

    return 0;
}