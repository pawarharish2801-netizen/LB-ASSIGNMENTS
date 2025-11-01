 #include <stdio.h>

double CircleArea(float fRadius)
{
    float PI = 0.0f ;
    double dArea = 0.0f;
    PI = 3.14f;

    //UPDATER
    if ( fRadius <0)
    {
        fRadius = -fRadius ;
    }

    dArea = PI * fRadius *fRadius ;
    return dArea;
}
int main()
{
    float fValue = 0.0 ;
    double dRet= 0.00;
    printf("Enter Radius: ");
    scanf("%f",&fValue);

    dRet =CircleArea(fValue);
    printf("%f ",dRet);

    return 0 ;
}
