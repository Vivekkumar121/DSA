#include <stdio.h>
#include <stdlib.h>
typedef struct students{
    int marks;
    struct students *next;
}node;

void printList()
{
    printf("hello");
    // node *nn=n;
    // while (nn != NULL) {
    //     printf("%d ", nn->marks);
    //     nn = nn->next;
    // }
}
int main(int argc, char const *argv[])
{
    printList();
    node* node1=NULL;
    node* node2=NULL;
    node* node3=NULL;
    node1=(node *)malloc(sizeof(node));
    node2=(node *)malloc(sizeof(node));
    node2=(node *)malloc(sizeof(node));
    node1->marks=23;
    node1->next=node2;
// printf("%d ",node1->marks);
    node2->marks=43;            
    node2->next=node3;

    node3->marks=53;
    node3->next=NULL;
    // printList(nṇode1);

  
    return 0;
}
