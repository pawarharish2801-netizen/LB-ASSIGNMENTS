#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef int * IPTR; 

int FreqDisplay(int Arr[], int iSize )
{
    int iCnt = 0 ,iCount = 0 ;

    for (iCnt = 0 ; iCnt <iSize ;iCnt++)
    {
        if (Arr[iCnt] ==11)
        {
            iCount++;
        }
    }
    return iCount; 
}

int main()
{
    int iCnt = 0 , iLength = 0 , iRet = 0 , iValue = 0;
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

    printf("Enter the input value ");
    scanf("%d",&iValue);

    // Step 2 : Use the Memory 
    iRet =FreqDisplay(iPtr ,iLength ,iValue ) ;

    printf("The Frequency of No %d is : %d\n",iValue , iRet);

    

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}