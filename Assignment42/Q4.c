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

int Maximum(PNODE first , int iNo )
{
    int iMax = first->data;
    
    while(first != NULL)
    {
        if((first->data) > iMax)
        {
            iMax = first->data ;   
        }
        first = first ->next ;  
    }
    return iMax ;
}



int main()
{   
    PNODE head = NULL;
    int iRet = 0 ;
    int iValue = 0 ;
   
  
    InsertFirst(&head,240);
    InsertFirst(&head,320);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head) ;
   
   
    iRet = Maximum(head,iValue);

    printf("The Max is %d",iRet);
        
    return 0;
}
