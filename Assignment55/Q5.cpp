#include <iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3, T No4)
{
    T Max = No1;
    
    if (No2 > Max)
    {
        Max = No2;
    }
    if (No3 > Max)
    {
        Max = No3;
    }
    if (No4 > Max)
    {
        Max = No4;
    }
    
    return Max;
}

int main()
{   
    int Value1 = 0;
    int Value2 = 0;
    int Value3 = 0;
    int Value4 = 0;
    int iRet = 0;

    cout << "Enter Value 1: ";
    cin >> Value1;
    
    cout << "Enter Value 2: ";
    cin >> Value2;
    
    cout << "Enter Value 3: ";
    cin >> Value3;
    
    cout << "Enter Value 4: ";
    cin >> Value4;

    cout << "\n--- Input Values ---\n";
    cout << "Value 1 is: " << Value1 << "\n";
    cout << "Value 2 is: " << Value2 << "\n";
    cout << "Value 3 is: " << Value3 << "\n";
    cout << "Value 4 is: " << Value4 << "\n";

    iRet = Maximum(Value1, Value2, Value3, Value4);

    cout << "\nThe Maximum value is: " << iRet << "\n";
    
    return 0;
}