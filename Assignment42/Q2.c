#include <stdio.h>
#pragma pack(1)
#include <stdlib.h>


struct node
{                                                      
    int data ;
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node * PNODE ;
typedef struct node ** PPNODE ;

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no ;
    newn->next = NULL;

    if((*first) == NULL)  //LL IS EMPTY
    {
        (*first) = newn ;
    }
    else //LL CONTAINS ATLEAST ONE
    {
        newn->next = (*first) ; 
        (*first) = newn ;
    }

}
int Display(PNODE first )
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data) ;
        first = first->next;
    }
    printf("NULL\n");
}

int LastOcc(PNODE first , int iNo )
{
    int iCnt = 1;
    int iOcc = -1 ;
    while(first != NULL)
    {
        if((first->data) == iNo )
        {
            iOcc = iCnt ;
            iCnt++;
            first = first ->next ;
        }
        else
        {
            first = first ->next ;
            iCnt++ ;
        }
    }
    return iOcc ;
}



int main()
{   
    PNODE head = NULL;
    int iRet = 0 ;
    int iValue = 0 ;
   
    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head) ;
    printf("Enter which no you want to find\n") ;
    scanf("%d",&iValue);
   
    iRet = LastOcc(head,iValue);

    if(iRet == -1)
    {
        printf("The no is not there");
    }
    else
    {
        printf("The no is at %d",iRet);
    }
        
    return 0;
}
