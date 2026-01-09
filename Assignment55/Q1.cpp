#include <iostream>
using namespace std;

template <class T>
T Addition(T No1 , T No2)
{
    T Ans = 0 ;
    Ans = No1 + No2 ;
    return Ans ;
}
int main()
{   
    cout<<"The Addition of two numbers is : "<<Addition(11,10)<<"\n";
    cout<<"The Addition of two float is : "<<Addition(11.12f,10.12f)<<"\n";
    cout<<"The Addition of two double is : "<<Addition(11.111,10.123)<<"\n";


    return 0 ;
}