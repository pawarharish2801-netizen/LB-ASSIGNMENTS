 #include <stdio.h>

double TempConverter(float fNo)
{
    double dTemp = 0.0;
    dTemp = (fNo -32) * (5.0/9.0) ;
    return dTemp;
}
int main() 
{
    float fValue= 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Farheneits ");
    scanf("%f",&fValue);

    dRet =TempConverter(fValue);
    printf("%lf Celsius",dRet);

    return 0 ;
}
