// pragma pack included
//typedef for struct node : NODE

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
    return 0;
}