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
void Perfect(PNODE first)
{
    int iCnt = 0;
    int iSum = 0;

    while(first != NULL)
    {
        iSum = 0;

        for(iCnt = 1; iCnt <= (first->data / 2); iCnt++)
        {
            if((first->data % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == first->data)
        {
            printf("%d is a perfect number\n", first->data);
        }

        first = first->next;
    }
}





int main()
{   
    PNODE head = NULL;
    int iValue = 0 ;
   
  
    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head) ;
   
   
    Perfect(head);

        
    return 0;
}
