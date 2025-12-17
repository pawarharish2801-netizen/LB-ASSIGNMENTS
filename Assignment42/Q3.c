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

int AllSum(PNODE first , int iNo )
{
    int iSum = 0;
    
    while(first != NULL)
    {
        iSum = iSum + first->data ;
        first = first ->next ;  
    }
    return iSum ;
}



int main()
{   
    PNODE head = NULL;
    int iRet = 0 ;
    int iValue = 0 ;
   
  
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head) ;
   
   
    iRet = AllSum(head,iValue);

    printf("The sum is %d",iRet);
        
    return 0;
}
