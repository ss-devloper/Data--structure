// pragma pack included
//typedef for struct node : NODE
// typedef for struct node NODE
// Adress holder of NODE is a pointer(head): PNODE
// Adress holder of (head):PPNODE
// putting adress of object in Head(ptr1) and adress of head in ptr2


#include<stdio.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
};
// typedef must be global i.e not in main because it can access from anywhre
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node** PPNODE;

int main()
{
    
    NODE obj; // replace struct node with NODE due to typedef
    PNODE ptr1 =NULL;
    PPNODE ptr2 =NULL;

    ptr1 =&obj;
    ptr2 =&ptr1;
   
    return 0;
}