#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{   
    int iNo = 0, iCnt = 0;
    for(iCnt = 0 ; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]/100) < 10 && (Arr[iCnt]/100) > 0 )
        {
            printf("%d\t", Arr[iCnt]);
        }
    } 
}

int main()
{
    int iSize = 0,  iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d", &iSize);


    p = (int*)malloc(iSize * sizeof(int));

    if( NULL == p)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    printf("Enter %d elements:\n ", iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("\tEnter element %d:\t", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    
    Display(p,iSize);

    free(p);
    return 0;
}