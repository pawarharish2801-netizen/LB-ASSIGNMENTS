#include <iostream>
using namespace std;

template <class T>
T Min(T *Arr, int iLength)
{
    T Min = 0;
    int iCnt = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty \n";
        return 0;
    }

    Min = Arr[iCnt];
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
           
        }
       
    }
    
    return Min;
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

    iRet = Min(Arr, iSize);

    cout << "The  Min Element is: " << iRet << endl;

    delete[] Arr;

    return 0;
}