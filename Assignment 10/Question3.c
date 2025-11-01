 #include <stdio.h>

int KmtoM(int iNo)
{
    int iArea = 0;
    iArea = iNo * 1000 ;
    return iArea;
}
int main() 
{
    int iValue= 0 ,iRet = 0;

    printf("Enter Distance in Km: ");
    scanf("%d",&iValue);

    iRet =KmtoM(iValue);
    printf("%d ",iRet);

    return 0 ;
}
