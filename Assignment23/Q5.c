#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR; 

int Product(int Arr[], int iSize )
{
    int iCnt = 0 ,  iOddCount=0 ;
    long long iProduct = 1;

    for (iCnt = 0 ; iCnt <iSize ;iCnt++)
    {
        if ((Arr[iCnt] % 2) != 0)
        {
            iOddCount++;
            iProduct = iProduct * Arr[iCnt] ;
        }   
    }
    if(iOddCount > 0)
    {
        return iProduct;
    }
    else
        {
            return -1;
        } 
}



int main()
{
    int iCnt = 0 , iLength = 0 , iRet = 0 ;
    bool bRet = false;
    IPTR iPtr = NULL ;


    printf("Enter the number of Elements : ");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate Memory");
        return -1;
    }
    
    printf("Enter the Values : \n");  //time complexity = O(n)
    for(iCnt = 0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

   

    // Step 2 : Use the Memory 
    iRet =Product(iPtr ,iLength  ) ;
    if(-1 == iRet)
    {
        printf("No Odd Element in Array");
    }
    else
    {
        printf("The Product is : %d",iRet);
    }
 
    

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}