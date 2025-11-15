#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef int * IPTR; 

bool bCheck(int Arr[], int iSize)
{
    int iCnt = 0 ;
    bool bCheck = false;
    
    for (iCnt = 0 ; iCnt <iSize ;iCnt++)
    {
        if (Arr[iCnt] ==11)
        {
            bCheck = true;
        }
    }
    return bCheck; 
}

int main()
{
    int iCnt = 0 , iLength = 0 ;
    IPTR iPtr = NULL ;
    bool bRet = false;

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
    bRet =bCheck(iPtr ,iLength ) ;
    if( true == bRet)
    {
        printf("The Number 11 is in the array");
    }
    else
    {
        printf("The Number 11 is not in the array ");
    }
    

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}