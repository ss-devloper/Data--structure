// pragma pack included
// creating PNODE head pointing to null
// Display logic


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
 void Display(PNODE first)  // head value coppied in first
 {
        while(first!=NULL)
        {
            printf("%d\t",first->data);
            first =first->next;
        }
        printf("/n");
 }
 int Count(PNODE first)
 {
  
    return 0;
 }
 // call by Adress
// insert functions calls internally malloc
 void InsertFirst(PPNODE first,int no)
 {}
 void InserLast(PPNODE first,int no)
 {}
 void InsertAtPos(PPNODE first,int no,int pos)
 {}

// delete functions internally calls free
 void DeleteFirst(PPNODE first)
 {}
 void DeleteLast(PPNODE first)
 {}
 void DeleteAtPos(PPNODE first,int pos)
 {}

int main()
{
    PNODE head = NULL;
    Display(head);
    Count(head);

    InsertFirst(&head,11); 
    InserLast(&head,21);
    InsertAtPos(&head,51,5);

    DeleteFirst(&head);
    DeleteLast(&head);
    DeleteAtPos(&head,5);
    return 0;
}