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

int CountFreq(PNODE first , int no )
{
    int iCount = 0 ;
    while (first != NULL)
    {
        if( (first->data) == no)
        {
            iCount++ ;
        }
        first = first ->next ;
    }
    return iCount ; 
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
    int iRet = 0 ;
    int iValue = 0 ;

    InsertFirst(&head , 51);
    InsertFirst(&head , 22);
    InsertFirst(&head , 11);

    Display(head);

    printf("Enter the no to find frequency  \n");
    scanf(" %d",&iValue) ;

    iRet = CountFreq(head , iValue ) ;

    printf(" The count of  no is : %d ",iRet);
   

    return 0 ;

}