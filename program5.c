// pragma pack included
//typedef for struct node : NODE
// value intitialisation 
// head pointer create at main(),then initialise member


#include<stdio.h>
#pragma pack(1)

struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;

int main()
{
    NODE *head =NULL;
    NODE obj; // replace struct node with NODE due to typedef
    head = &obj;
    head->data =11;
    head->next=NULL;
    
   
    return 0;
}