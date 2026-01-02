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


int Difference ( PNODE first)
{
   
    int iMax = 0 ;
    int iMin = 0 ;

    iMax = first->data;
    iMin = first->data ;

    int iDiff = 0 ;

    while ( first != NULL)
    {
        if (first->data <= iMin)
        {
            iMin = first->data;
        }
    
        if (first->data > iMax)
        {
            iMax = first->data;
        }
        first = first->next ;
    }

    iDiff = iMax - iMin ;
    return iDiff ;
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
    InsertFirst(&head , 11);
    InsertFirst(&head , 123);
    InsertFirst(&head , 121);
    InsertFirst(&head , 47);
    InsertFirst(&head , 10);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    iRet = Difference(head);

    printf ( " The difference between Max and Min is : %d ",iRet);

    return 0 ;

}