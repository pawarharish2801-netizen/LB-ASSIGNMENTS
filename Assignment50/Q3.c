#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data ; 
    struct node *next ;
};

typedef struct node NODE ;
typedef struct node *PNODE;
typedef struct node **PPNODE ;

void InsertFirst ( PPNODE first , int no)
{
    PNODE newn = NULL ;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no ;
    newn->next = NULL ;

    if ( first == NULL )
    {
        *first = newn ;
    }
    else
    {
        newn->next = *first ;
        *first = newn ;
    }
}


bool  CheckSorted ( PNODE first)
{
    if ( first == NULL)
    {
        printf ( " No linked List");
        return false ;
    }
    int iPrev = 0 ;
    iPrev = first ->data ;
    first = first ->next ;
   
    while ( first != NULL)
    {
        if ( first ->data >= iPrev)
        {
            iPrev = first ->data ;
            first = first ->next ;
        }
        else   
        {
            return false ;
        }        
    }
    return true ;
}

void Display(PNODE first)
{
    while ( first != NULL )
    {
        printf(" | %d | ->",first->data);
        first = first->next ;
    }
    printf("NULL \n");
}
int main()
{
    PNODE head = NULL ;
    bool bRet = 0 ;
    int iValue = 0 ;

    InsertFirst(&head , 1111);
    InsertFirst(&head , 111);
    InsertFirst(&head , 23);
    InsertFirst(&head , 12);
    InsertFirst(&head , 4);
    InsertFirst(&head , 3);
    InsertFirst(&head , 3);
    InsertFirst(&head , 2);
    InsertFirst(&head , 1);

    Display(head);

    bRet = CheckSorted(head);

    if ( bRet == 0)
    {
        printf ("The list is not sorted");
    }
    else
    {
        printf("The list is sorted ");
    }

    return 0 ;

}