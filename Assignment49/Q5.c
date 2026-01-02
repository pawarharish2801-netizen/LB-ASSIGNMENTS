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


int CountTwoDigit ( PNODE first)
{
    int iCount = 0 ;
    int iTwo = 0 ;
    int iDigit = 0 ;
    int iNo = 0 ;
    if ( first == NULL)
    {
        return 0 ;
    }

    while ( first != NULL)
    {
        iNo = first->data;
        iCount = 0 ;
        while ( iNo != 0)
        {
            iDigit = iNo % 10 ; 
            iCount++ ;
            iNo = iNo / 10  ;
        }
        if ( iCount == 2)
        {
            iTwo++ ;
        }
        first = first->next ;   
    }
    return iTwo;
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
    InsertFirst(&head , -121);
    InsertFirst(&head , 47);
    InsertFirst(&head , 10);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    iRet = CountTwoDigit(head);

    printf ( " The two digits no are : %d",iRet);

        

    return 0 ;

}