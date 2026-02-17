// pragma pack included
//typedef for struct node : NODE
// value intitialisation 

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
    NODE obj; // replace struct node with NODE due to typedef
    printf("%d\n",sizeof(obj));
    obj.data=11;
    obj.next =NULL;
    return 0;
}