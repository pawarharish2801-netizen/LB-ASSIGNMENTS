#include <iostream>
using namespace std;

template <class T>
void Swap(T *No1 , T *No2)
{
    T temp = 0 ;
    temp = *No1 ;
    *No1 = *No2 ;
    *No2 = temp ;
}
int main()
{   
    int Value1 = 11 ;
    int Value2 = 21 ;

    cout<<"Value 1 is : "<<Value1<<"\n";
    cout<<"Value 2 is : "<<Value2<<"\n";

    Swap(&Value1 , &Value2);

     cout<<"Value 1 is : "<<Value1<<"\n";
    cout<<"Value 2 is : "<<Value2<<"\n";
    


    return 0 ;
}