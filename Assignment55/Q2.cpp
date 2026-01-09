#include <iostream>
using namespace std;

template <class T>
T Substraction(T No1 , T No2)
{
    T Ans = 0 ;
    Ans = No1 - No2 ;
    return Ans ;
}
int main()
{   
    cout<<"The Substraction of two numbers is : "<<Substraction(11,10)<<"\n";
    cout<<"The Substraction of two float is : "<<Substraction(11.12f,10.12f)<<"\n";
    cout<<"The Substraction of two double is : "<<Substraction(11.111,10.123)<<"\n";


    return 0 ;
}