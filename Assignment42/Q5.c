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

int Minimum(PNODE first , int iNo )
{
    int iMin = first->data;
    
    while(first != NULL)
    {
        if((first->data) < iMin)
        {
            iMin = first->data ;   
        }
        first = first ->next ;  
    }
    return iMin ;
}



int main()
{   
    PNODE head = NULL;
    int iRet = 0 ;
    int iValue = 0 ;
   
  
    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,20);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head) ;
   
   
    iRet = Minimum(head,iValue);

    printf("The Min is %d",iRet);
        
    return 0;
}
