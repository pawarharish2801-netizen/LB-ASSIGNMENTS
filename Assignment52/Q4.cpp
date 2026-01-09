#include <iostream> 
using namespace std ;

template <class T>
T Maximum( T* Arr , int iLength)
{
    T iMax = 0 ;
    int iCnt = 0 ;
    iMax = Arr[0];
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax ;
}

int main()
{
    int iSize = 0 ;
    int iCnt = 0 ;

    cout << "Enter the no of elements :  \n";
    cin>>iSize ;

    int Arr[iSize];

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<"Enter the element "<<iCnt+1<<" : \n";
        cin>>Arr[iCnt];
    }

    cout<<"Maximum is : "<<Maximum(Arr , iSize)<<"\n";

////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"----------------------------------------------------------------------------\n";
    cout << "Enter the no of elements :  \n";
    cin>>iSize ;

    float Brr[iSize];

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<"Enter the element "<<iCnt+1<<" : \n";
        cin>>Brr[iCnt];
    }
    cout<<"Maximum is : "<<Maximum(Brr , iSize)<<"\n";



    return 0 ;
}