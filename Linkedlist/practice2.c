#include <stdio.h>
#include <stdlib.h>
typedef struct students{
    int marks;
    struct students *next;
}node;

void printList(node* n)
{
    while ((n->next) != NULL) {
        printf("%d ", n->marks);
        n = n->next;
    }
}
int main(int argc, char const *argv[])
{
    node* node1=NULL;
    node* node2=NULL;
    node* node3=NULL;
    node1=(node *)malloc(sizeof(node));
    node2=(node *)malloc(sizeof(node));
    node2=(node *)malloc(sizeof(node));
    node1->marks=23;
    node1->next=node2;
printf("%d ",node1->marks);
    node2->marks=43;            
    node2->next=node3;

    node3->marks=53;
    node3->next=NULL;
    printList(node1);

  
    return 0;
}
