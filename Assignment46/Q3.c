#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data; 
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

int  CountLess(PNODE first  , int no)
{
    int iCount = 0 ;
    while (first != NULL)
    {
        
        if( (first->data) < no)
        {
            iCount++ ;   
        }
        first = first ->next ;
    }
    return iCount;
}

bool CheckList( PNODE first)
{
    if (first == NULL)
    {
        return false ;
    }
    else
    {
        return true ;
    }
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

    InsertFirst(&head , 51);
    InsertFirst(&head , 19);
    InsertFirst(&head , 22);
    InsertFirst(&head , 11);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    bRet = CheckList( head) ;

    if (bRet == true )
    {
        printf("List is there \n");
    }
    else
    {
        printf("List is not there \n");
    }
 
    
   

    return 0 ;

}