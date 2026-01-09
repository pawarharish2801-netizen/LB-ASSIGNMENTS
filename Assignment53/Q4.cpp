#include <iostream>
using namespace std;

template <class T>
T SecondMin(T *Arr, int iLength)
{
    T Min = 0;
    T SecondMin = 0;
    int iCnt = 0;

    if (Arr == NULL || iLength < 2)
    {
        cout << "The Array is Empty or has less than 2 elements" << endl;
        return 0;
    }

    // Initialize Min and SecondMin properly
    if (Arr[0] < Arr[1])
    {
        Min = Arr[0];
        SecondMin = Arr[1];
    }
    else
    {
        Min = Arr[1];
        SecondMin = Arr[0];
    }
    
    // Start from index 2 since we already processed first two elements
    for (iCnt = 2; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] < Min)
        {
            SecondMin = Min;
            Min = Arr[iCnt];
        }
        else if (Arr[iCnt] < SecondMin && Arr[iCnt] != Min)
        {
            SecondMin = Arr[iCnt];
        }
    }
    
    return SecondMin;
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

    iRet = SecondMin(Arr, iSize);

    cout << "The Second Min Element is: " << iRet << endl;

    delete[] Arr;

    return 0;
}