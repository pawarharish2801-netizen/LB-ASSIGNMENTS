#include <iostream>
using namespace std;

template <class T>
class Display
{
public:
    T *Arr;
    int iNo;

    Display();
    ~Display();  // Destructor added
    void Accept();
    void Reverse();
};

template <class T>
Display<T>::Display()
{
    this->iNo = 0;
    this->Arr = NULL;
}

template <class T>
Display<T>::~Display()
{
    if (Arr != NULL)
    {
        delete[] Arr;  // Clean up memory
    }
}

template <class T>
void Display<T>::Accept()
{
    int iCnt = 0;
    cout << "Enter how many elements: ";
    cin >> this->iNo;

    // Correct allocation for array of iNo elements
    this->Arr = new T[this->iNo];

    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout << "Enter value " << (iCnt + 1) << ": ";
        cin >> this->Arr[iCnt];
    }

}

template <class T>
void Display<T>::Reverse()
{
    int iCnt = 0;

    for (iCnt = iNo -1 ; iCnt >= 0; iCnt--)
    {
        cout<<Arr[iCnt]<<"\t";
    }
   
}

int main()
{
    Display<int> *dobj = new Display<int>();

    dobj->Accept();
    dobj->Reverse();


   

    delete dobj;  // Clean up

    return 0;
}