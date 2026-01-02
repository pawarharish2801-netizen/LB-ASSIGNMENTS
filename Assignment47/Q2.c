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

int CountDigits( PNODE first) 
{
    int iCount = 0 ;
    int iDigit = 0 ;

    while (first != NULL)
    {
        iDigit = first->data ;
        if(iDigit == 0)
        {
            iCount++ ;
        }
        while ( iDigit != 0)
        {
            iDigit = iDigit / 10 ;
            iCount++ ;
        }
        first = first->next ;
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
    InsertFirst(&head , 11);
    InsertFirst(&head , 123);
    InsertFirst(&head , 121);
     InsertFirst(&head , 0);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    iRet = CountDigits(head);

    printf(" The no of digits are : %d",iRet);

    
    
   

    return 0 ;

}