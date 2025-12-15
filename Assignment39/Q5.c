#include <stdio.h>

void Display()
{
    int iCnt = 0;
    char c = '\0';

    c = 'a';

    for(iCnt=1;iCnt<=6 && c <= 'z';iCnt++, c++)
    {
        printf("%c\t", c);
    }
}

int main()
{
    Display();

    return 0;
}