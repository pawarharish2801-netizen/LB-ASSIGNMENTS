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

int  LastOcc(PNODE first  , int no)
{
    int iCount = 0 ;
    int iPos = 0 ;
    
    while (first != NULL)
    {
        iCount++ ;
        if( (first->data) == no)
        {
            iPos = iCount ;
        }
        first = first ->next ;
    }
    return iPos;
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
    InsertFirst(&head , 19);
    InsertFirst(&head , 22);
    InsertFirst(&head , 11);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    printf("Enter no to find : \n");
    scanf("%d",&iValue);

    iRet = LastOcc(head , iValue ) ;

    if ( iRet == 0 )
    {
        printf("The no is not there");
    }
    else
    {
        printf ("The no is at pos : %d ",iRet);
    }
   

    return 0 ;

}