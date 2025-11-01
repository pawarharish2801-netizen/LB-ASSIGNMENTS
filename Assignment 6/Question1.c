#include <stdio.h>

int main()
{
    char ch[30];
    printf("Enter your full name : \t");
    fgets(ch,sizeof(ch),stdin);
    printf("Your full name is %s",ch);
    return 0 ;
}
