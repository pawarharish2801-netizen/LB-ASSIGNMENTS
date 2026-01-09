#include <iostream> 
using namespace std ;

template <class T>
T Minimum( T* Arr , int iLength)
{
    T iMin = 0 ;
    int iCnt = 0 ;
    iMin = Arr[0];
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin ;
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

    cout<<"Minimum is : "<<Minimum(Arr , iSize)<<"\n";

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
    cout<<"Minimum is : "<<Minimum(Brr , iSize)<<"\n";



    return 0 ;
}