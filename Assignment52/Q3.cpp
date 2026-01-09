#include <iostream> 
using namespace std ;

template <class T>
T Addition( T* Arr , int iLength)
{
    T iSum = 0 ;
    int iCnt = 0 ;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum ;
}

int main()
{
    int iSize = 0 ;
    int iCnt = 0 ;
    int iRet = 0 ;
    float fRet = 0 ;
    cout << "Enter the no of elements :  \n";
    cin>>iSize ;

    int Arr[iSize];

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<"Enter the element "<<iCnt+1<<" : \n";
        cin>>Arr[iCnt];
    }

    iRet = Addition(Arr , iSize);

    cout<<"Addition is : "<<iRet<<"\n";

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

    fRet = Addition(Brr , iSize);

    cout<<"Addition is : \n"<<fRet;



    return 0 ;
}