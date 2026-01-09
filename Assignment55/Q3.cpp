#include <iostream>
using namespace std;

template <class T>
double Division(T No1 , T No2)
{
    double Ans = 0 ;
    Ans = (double)No1 / (double)No2 ;
    return Ans ;
}
int main()
{   
    cout<<"The Division of two numbers is : "<<Division(11,10)<<"\n";
    cout<<"The Division of two float is : "<<Division(11.12f,10.12f)<<"\n";
    cout<<"The Division of two double is : "<<Division(11.111,10.123)<<"\n";


    return 0 ;
}