#include <iostream>
using namespace std;
template <class T>
T* Copy(T *Arr , int iLength )
{
    int iCnt = 0 ;
    T *Brr =NULL ;

    if (Arr == NULL)
    {
        cout << "The Array is Empty";
        return NULL ;
    }

    Brr = new T[iLength];
    
    for ( iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        Brr[iCnt] = Arr[iCnt];
    }

    return Brr;
}

template <class T>
void Display(T* Arr , int iLength)
{
    int iCnt = 0 ;

    if (Arr == NULL)
    {
        cout << "The Array is Empty";
        return  ;
    }
    
    for(iCnt = 0 ; iCnt< iLength ; iCnt++)
    {
       cout<<Arr[iCnt]<<"\t"; 
    }
    cout<<"\n";
}


int main()
{
    int iSize = 0 ;
    int iCnt = 0 ;
    int *CopyArr = 0 ;
    cout<<"Enter the no of elements you want : \t";
    cin>>iSize;

    int *Arr = new int[iSize];
    
    for(iCnt = 0 ; iCnt< iSize ; iCnt++)
    {
       cout<<"Enter Element "<<iCnt+1<<" : \t";
       cin>>Arr[iCnt]; 
    }

    Display(Arr,iSize);

    CopyArr = Copy(Arr,iSize);

    Display(CopyArr,iSize);

    return 0 ;
}