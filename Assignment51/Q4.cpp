#include <iostream>
using namespace std;

template <class T>
class Display
{
public:
    T *Arr;
    int iNo;
    T iValue ;

    Display();
    ~Display();  // Destructor added
    void Accept();
    int FirstOcc();
};

template <class T>
Display<T>::Display()
{
    this->iNo = 0;
    this->Arr = NULL;
    this->iValue = 0 ;
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

    cout<<"Enter the value to find : \n";
    cin>>this->iValue ;
}

template <class T>
int Display<T>::FirstOcc()
{
    int iCnt = 0;
    int iCount = 0 ;
    
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        if ( Arr[iCnt] == iValue )
        {
            return iCnt ;
        }
    }
    return -1;
}

int main()
{
    Display<int> *dobj = new Display<int>();

    dobj->Accept();
    dobj->FirstOcc();


    if (dobj->FirstOcc() == -1)
    {
        cout<<"The Element is not there";
    }
    else
    {
    cout<<"The first occ  of "<<dobj->iValue<<" is at position : "<<dobj->FirstOcc()<<"\n";
    }

    delete dobj;  // Clean up

    return 0;
}