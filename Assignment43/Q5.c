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

void SumDigit(PNODE Head)
{
    int iMax = 0, iSum = 0;
    int iNo = 0, iDigit = 0;
    while(Head != NULL)
    {
        iSum = 0;
        iNo = Head->data;
        while(iNo != 0)
        {
            iDigit = iNo%10;
            iSum = iSum + iDigit;
            iNo = iNo/10;
        }
        printf("%d\t",iSum);
        Head = Head->next;
    }
}
int main()
{
    PNODE head = NULL;

    InserFirst(&head, 6);
    InserFirst(&head, 89);
    InserFirst(&head, 41);
    InserFirst(&head, 17);
    InserFirst(&head, 28);
    InserFirst(&head, 11);

    Display(head);

    SumDigit(head);
    
    return 0;
}