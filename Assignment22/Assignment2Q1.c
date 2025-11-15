#include <stdio.h>
#include <stdlib.h>


typedef int * IPTR; 

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0 ;
    int iCount = 0 ;
     
    for(iCnt = iSize-1 ; iCnt >=0 ; iCnt--)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iCnt = 0 , iLength = 0 ,  iRet = 0;
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
    iRet =CountEven(iPtr ,iLength ) ;
    printf("The Even Numbers in Array are : %d",iRet);

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}