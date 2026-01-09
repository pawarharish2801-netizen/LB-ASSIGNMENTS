#include <iostream>
using namespace std;

template <class T>
bool Search (T *Arr , int iLength , T Value)
{
    int iCnt = 0;

    if (Arr == NULL)
    {
        cout << "The Array is Empty" ;
        return false;
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ( Arr[iCnt] == Value)
        {
            return true ;
        }
    }
    return false;
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
    bool bRet = 0;
    
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

    bRet = Search(Arr,iSize , 11);

    if ( bRet == true )
    {
        cout<<"The no is there";   
    }
    else
    {
        cout<<"The no is  not there";
    }





    

    delete[] Arr;

    return 0;
}