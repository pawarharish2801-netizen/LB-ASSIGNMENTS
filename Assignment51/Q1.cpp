#include <iostream>
using namespace std ;

template <class T>
class Display
{
    public :
    T value ;
    int iNo ;

    Display();
    void Accept();
    void DisplayValue();

};

template <class T>
Display <T> ::Display()
{
    this->iNo = 0 ;
    this->value = 0 ;
}

template <class T>
void Display <T> :: Accept()
{
    cout<<"Enter  the value \n";
    cin>>this->value ;

    cout<<"Enter how many times \n";
    cin>>this->iNo ;
}

template <class T>
void Display <T> :: DisplayValue()
{
    int iCnt = 0 ;

    for ( iCnt = 1 ; iCnt <=iNo ; iCnt++)
    {
        cout<<this->value<<"\t" ;
    }
}

int main()
{
    Display <char> *dobj = new Display <char> ();

    dobj->Accept();

    dobj->DisplayValue();

    return 0 ;
}