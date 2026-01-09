#include <iostream>
using namespace std;
template <class T>
bool CheckSorted(T *Arr , int iLength )
{
    int iCnt = 0 ;
    T Value = 0 ;

    if (Arr == NULL)
    {
        cout << "The Array is Empty";
        return false  ;
    }

    Value = Arr[0];

    for ( iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if ( Value <= Arr[iCnt] )
        {
            Value = Arr[iCnt];
            continue ;
        }
        else
        {
            return false ;
            break;
        }
    }
    return true ;
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
    bool bRet = 0 ;
    cout<<"Enter the no of elements you want : \t";
    cin>>iSize;

    int *Arr = new int[iSize];
    
    for(iCnt = 0 ; iCnt< iSize ; iCnt++)
    {
       cout<<"Enter Element "<<iCnt+1<<" : \t";
       cin>>Arr[iCnt]; 
    }

    Display(Arr,iSize);

    bRet = CheckSorted(Arr , iSize);

    if ( bRet == true)
    {
        cout<<("The list is sorted");
    }
    else
    {
        cout<<("The list is not sorted");
    }

    delete []Arr;

   

    return 0 ;
}