#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR; 

void RangeDisplay(int Arr[], int iSize , int iNo1 , int iNo2 )
{
    int iCnt = 0 ,iCount = 0 ;
    bool bCheck = false;

    for (iCnt = 0 ; iCnt <iSize ;iCnt++)
    {
        if (Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
        {
            printf("%d\n",Arr[iCnt]);
        }   
    }
    
}


int main()
{
    int iCnt = 0 , iLength = 0 , iRet = 0 , iValue1 = 0 , iValue2 = 0;
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

    printf("Enter the starting point");
    scanf("%d",&iValue1);
    printf("Enter the Ending Point");
    scanf("%d",&iValue2);

    // Step 2 : Use the Memory 
    RangeDisplay(iPtr ,iLength ,iValue1 ,iValue2 ) ;
    
    

    //Step 3 : Free the Memory
    free(iPtr);
    
    return 0;
}