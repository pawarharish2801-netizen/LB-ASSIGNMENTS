#include <iostream>
using namespace std;

template <class T>
int SumODD (T *Arr , int iLength , T Value)
{
    int iCnt = 0;
    int iSum = 0 ;

    if (Arr == NULL)
    {
        cout << "The Array is Empty" ;
        return -1;
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ( Arr[iCnt] % 2 !=0 )
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
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

    iRet = SumODD(Arr,iSize , 11);

    cout<<"The sum of the ODD no is : "<<iRet<<"\n";

    
    delete[] Arr;

    return 0;
}