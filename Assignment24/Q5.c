#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0;

    for(iCnt= 0; iCnt<iLength; iCnt++)
    {
        int iSum = 0;
        while(Arr[iCnt] != 0)
        {
            iNo = Arr[iCnt]%10;
            iSum = iSum + iNo;
            Arr[iCnt] = Arr[iCnt]/10;
        }
        printf("%d\t", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",  &iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elemetns\n", iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("\tEnter elements %d: ", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);
    return 0;
}