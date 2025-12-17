/*
2.  Write a program which displays all elements which are prime from singly linear list.
*/
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InserFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)  //LL is empty
    {
        (*first) = newn;
    }
    else                //LL contains atleast 1 node
    {
        newn->next = (*first);
        (*first) = newn;
    }
}

void Display(PNODE first)
{
    while(first!=NULL)
    {
        printf("| %d |->", first->data);
        first= first ->next;
    }
    printf(" NULL\n");
}

void DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    int iNo = 0;
    int iFlag = 0; 
    
    printf("Prime numbers in the list are: \n");

    while(Head != NULL)
    {
        iNo = Head->data; 
        iFlag = 0;

        if(iNo <= 1)
        {
            iFlag = 1; 
        }

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFlag = 1;
                break;
            }
        }

        if(iFlag == 0)
        {
            printf("%d\t", iNo);
        }

        Head = Head->next;
    }
    printf("\n");
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InserFirst(&head, 6);
    InserFirst(&head, 89);
    InserFirst(&head, 41);
    InserFirst(&head, 17);
    InserFirst(&head, 28);
    InserFirst(&head, 11);

    Display(head);

    DisplayPrime(head);

    return 0;
}   