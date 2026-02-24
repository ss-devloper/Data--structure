//linked list code
#include<stdio.h>
#include<stdlib.h>
#pragma Pack(1);
 struct node
{
    int Data;
    struct node *next;  //self referential structure
};

typedef struct node NODE;   // instead struct node  we use NODE temprory name change
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserFirst(PPNODE first,int no)
{
    PNODE newn =NULL;

    newn =(PNODE)malloc( sizeof(NODE));
    newn->Data =no;
    newn->next =NULL;
    if((*first) ==NULL)  //LL IS EMPTY
    {
        (*first) = newn;
    }
    else     //LL contaims atleast 1 node
    {
        newn->next =(*first);
        (*first) =newn;

    }
}

void InserLast(PPNODE first,int no)
{
    PNODE newn =NULL;

    newn =(PNODE)malloc( sizeof(NODE));
    newn->Data =no;
    newn->next =NULL;
    if(*first ==NULL)  //LL IS EMPTY
    {
        *first = newn;   // head dont use use its replicate coppy
    }
    else     //LL contaims atleast 1 node
    {

    }
}
void Display(PNODE first)
{
    while(first!= NULL)
    {
        printf("| %d |->",first->Data);
        first =first->next;
    }
    printf("NULL\n");
}

int main()
{  
    PNODE head =NULL;
    InserFirst(&head,75);
    InserFirst(&head,51);
    InserFirst(&head,21);
    InserFirst(&head,11);

    Display(head);

    return 0;
}
