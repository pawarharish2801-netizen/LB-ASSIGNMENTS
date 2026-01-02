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


int CountPrime (PNODE first)
{

    int iCnt = 0 ;
    int iPrime = 0 ;
    int iCount = 0 ;
    while ( first != NULL )
    {
        iCount = 0 ;
    
        if ( first-> data <= 1)
        {
            first = first ->next ;  
            continue; 
        }
        for ( iCnt = 2 ; iCnt <= (first->data) / 2 ; iCnt++ )
        {
            if ( first->data % iCnt == 0  )
            {
                iCount++ ;
                break;
            }

        }
        if (iCount == 0)
        {
            
            iPrime++ ;
        }
        first = first->next ;
    }
    return iPrime;
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
    InsertFirst(&head , 0);
    InsertFirst(&head , 4);
    InsertFirst(&head , 6);
    InsertFirst(&head , 19);

    Display(head);

    iRet= CountPrime(head);

    printf("The total Prime no are : %d", iRet);


    
    
   

    return 0 ;

}