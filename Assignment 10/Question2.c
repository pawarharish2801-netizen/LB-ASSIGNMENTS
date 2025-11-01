 #include <stdio.h>

double RectArea(float fLength , float fBreadth)
{
    double dArea = 0.0f;
    dArea = fLength * fBreadth ;
    return dArea;
}
int main() 
{
    float fValue1  = 0.0, fValue2 = 0.0 ;
    double dRet= 0.00;

    printf("Enter Length: ");
    scanf("%f",&fValue1);

    printf("Enter Breadth: ");
    scanf("%f",&fValue2); 

    dRet =RectArea(fValue1,fValue2);
    printf("%f ",dRet);

    return 0 ;
}
