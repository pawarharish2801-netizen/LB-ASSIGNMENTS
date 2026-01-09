#include <iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iLength)
{
    int forwardCnt = 0;
    int backCnt = 0;
    T temp = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty\n"  ;
        return;
    }
    
    for(forwardCnt = 0, backCnt = iLength - 1; forwardCnt < backCnt; forwardCnt++, backCnt--)
    {
        // Swap elements
        temp = Arr[forwardCnt];
        Arr[forwardCnt] = Arr[backCnt];
        Arr[backCnt] = temp;
    }
}

template <class T>
void Display(T* Arr, int iLength)
{
    int iCnt = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty\n";
        return;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       cout << Arr[iCnt] << "\t"; 
    }
    cout << "\n";
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    
    cout << "Enter the no of elements you want: \t";
    cin >> iSize;

    int *Arr = new int[iSize];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       cout << "Enter Element " << iCnt + 1 << ": \t";
       cin >> Arr[iCnt]; 
    }

    cout << "\nOriginal Array:\n";
    Display(Arr, iSize);

    Reverse(Arr, iSize);

    cout << "Reversed Array:\n";
    Display(Arr, iSize);

    delete[] Arr;

    return 0;
}