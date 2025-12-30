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

bool Search(PNODE first , int  no )
{
    while (first != NULL)
    {
        if( first->data == no)
        {
            return true ;
        }
        else
        {
            first = first ->next ;
        }
    }
    return false ;   
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
    InsertFirst(&head , 21);
    InsertFirst(&head , 11);

    Display(head);

    printf("Which no you want to find \n");
    scanf("%d", &iValue);
    bRet = Search(head ,iValue) ;

    if ( bRet == true)
    {
        printf(" The no %d  is present",iValue);
    }
    else 
    {
        printf(" The no %d is not present ",iValue);
    }


    return 0 ;

}