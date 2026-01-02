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


void DisplayDivBy3 ( PNODE first)
{
    if ( first == NULL)
    {
        return ;
    }
    while ( first != NULL)
    {
        if (first->data % 3 == 0)
        {
            printf(" %d ",first->data);
        }
        first = first->next;
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
    bool bRet = false ;
    int iValue = 0 ;

    InsertFirst(&head , 51);
    InsertFirst(&head , 11);
    InsertFirst(&head , 123);
    InsertFirst(&head , -121);
    InsertFirst(&head , 47);
    InsertFirst(&head , 10);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    DisplayDivBy3(head);

        

    return 0 ;

}