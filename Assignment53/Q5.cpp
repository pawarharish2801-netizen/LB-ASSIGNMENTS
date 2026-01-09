#include <iostream>
using namespace std;

template <class T>
void ReplaceVal (T *Arr , int iLength , T oldval , T newval)
{
    int iCnt = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty" ;
        return;
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ( Arr[iCnt] == oldval)
        {
            Arr[iCnt] = newval ;
        }
    }
}
    

template <class T>
void Display(T* Arr, int iLength)
{
    int iCnt = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty" ;
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

    cout << "\nArray Elements:" ;
    Display(Arr, iSize);

    ReplaceVal(Arr,iSize , 11 , 1);

    Display(Arr, iSize);



    

    delete[] Arr;

    return 0;
}