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

int SecMaximum(PNODE Head)
{
    int iMax = 0, iSecMax = 0;

    while(Head != NULL)
    {
        if(iMax< Head->data)
        {
            iSecMax = iMax;
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iSecMax; 
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

    iRet = SecMaximum(head);
    printf("Second Largest number is %d", iRet);

    return 0;
}   