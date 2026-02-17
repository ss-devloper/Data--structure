// pragma pack included
// creating PNODE head pointing to null
// call by value functions Display and count 
// calling functions and sending head catch inti first
// call by adress functions 



#include<stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;
// call by value always use PNODE
 void Display(PNODE first)
 {}
 int Count(PNODE first)
 {
    return 0;
 }
 // call by Adress

 void InsertFirst(PPNODE first,int no)
 {}
 void InserLast(PPNODE first,int no)
 {}
 void InsertAtPos(PPNODE first,int no,int pos)
 {}

int main()
{
    PNODE head = NULL;
    Display(head);
    Count(head);

    InsertFirst(&head,11); 
    InserLast(&head,21);
    InsertAtPos(&head,51,5);
    return 0;
}