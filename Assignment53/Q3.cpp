#include <iostream>
using namespace std;

template <class T>
T SecondMax(T *Arr, int iLength)
{
    T Max = 0;
    T SecondMax = 0;
    int iCnt = 0;

    if (Arr == NULL || iLength < 2)
    {
        cout << "The Array is Empty or has less than 2 elements" << endl;
        return 0;
    }

    // Initialize Max and SecondMax properly
    if (Arr[0] > Arr[1])
    {
        Max = Arr[0];
        SecondMax = Arr[1];
    }
    else
    {
        Max = Arr[1];
        SecondMax = Arr[0];
    }
    
    // Start from index 2 since we already processed first two elements
    for (iCnt = 2; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > Max)
        {
            SecondMax = Max;
            Max = Arr[iCnt];
        }
        else if (Arr[iCnt] > SecondMax && Arr[iCnt] != Max)
        {
            SecondMax = Arr[iCnt];
        }
    }
    
    return SecondMax;
}

template <class T>
void Display(T* Arr, int iLength)
{
    int iCnt = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty" << endl;
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
    int iRet = 0;
    
    cout << "Enter the no of elements you want: \t";
    cin >> iSize;

    int *Arr = new int[iSize];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       cout << "Enter Element " << iCnt + 1 << ": \t";
       cin >> Arr[iCnt]; 
    }

    cout << "\nArray Elements:" << endl;
    Display(Arr, iSize);

    iRet = SecondMax(Arr, iSize);

    cout << "The Second Max Element is: " << iRet << endl;

    delete[] Arr;

    return 0;
}