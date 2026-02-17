// pragma pack included
// creating PNODE head pointing to null
// call by value functions Display and count 
// calling functions and sending head catch inti first



#include<stdio.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
}
typedef struct node NODE;
typedef struct node * PNODE,
typedef struct node** PPNODE;

 void Display(PNODE first)
 {}
 int Count(PNODE first)
 {
    return 0;
 }

int main()
{
    PNODE head = NULL;
    Display(head);
    Count(head);

   
    return 0;
}