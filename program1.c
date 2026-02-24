#include<stdio.h>
struct node 
{
    int data;
    struct node*next;

};
int main()
{
    struct node obj; // now mwmory allocated
    printf("%d\n",sizeof(obj));   // 8 because pointer is 4 byte
    return 0;
}