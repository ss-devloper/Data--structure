// pragma pack included
// creating PNODE head pointing to null
// InserFirst logic 


#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

 // call by Adress

 void InsertFirst(PPNODE first,int no)
 {
    
        PNODE newn =NULL;
        newn =(PNODE)malloc(sizeof(NODE));

        newn -> data =no;
        newn->next =NULL;
    if(*first == NULL)
    {
        printf("Linked list is empty\n");
        *first =newn;
    }
    else 
    {
        newn->next = (*first);
        *first =newn ;
    }
 }
 void InsertLast(PPNODE first,int no)
 {
    PNODE newn =NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn-> data = no;
    newn-> next = NULL;

    if(*first == NULL)
    {
      printf("linked list is empty\n");
      *first = newn;
    }
    else 
    {

    }

 }
 




int main()
{
    PNODE head = NULL;
    

    InsertFirst(&head,11); 
    InsertFirst(&head,21);
    InsertFirst(&head,51);
    InsertFirst(&head,101);
    
    return 0;
}