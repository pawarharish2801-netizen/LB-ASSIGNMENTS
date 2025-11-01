 #include <stdio.h>

double Sqft2SqMtr(float fNo)
{
    double dMtr = 0.0;
    dMtr = fNo * 0.0929 ;
    return dMtr;
}
int main() 
{
    float fValue= 0.0;
    double dRet = 0.0;

    printf("Enter Area in Sq. Foot ");
    scanf("%f",&fValue);

    dRet =Sqft2SqMtr(fValue);
    printf("%lf Sq. Mtr",dRet);

    return 0 ;
}
