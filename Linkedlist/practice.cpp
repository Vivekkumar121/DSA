#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
}Node;
void *insertAtBegining(Node* *head,int item2);
Node* searchInSorted(Node *head,int item2);
void traverseInReverseOrder(Node *head);
void insertAtEnd(Node **head,int item);
void insertAfterElement(Node *head,int item,int num);
void deleteFromBegining(Node **head);
void deleteFromEnd(Node** head);
// void createEmptyList()
// void traverseInReverseOrder(Node *head){ 
//     if(head->next!=NULL){
//         traverseInReverseOrder(head->next);
//         printf("%d \n",head->data);
//     }
// }
void printList(Node *n)
{
    while (n!=NULL){
        printf("%d  ",n->data);
        n=n->next;
    }
}
int main ()
{
struct Node * head = NULL;
struct Node * second = NULL;
struct Node * third = NULL;
struct Node * fourth = NULL;
head = (Node*)malloc(sizeof( Node));
second = (Node*)malloc(sizeof(Node));
third = (Node*)malloc(sizeof(Node));
fourth = (Node*)malloc(sizeof(Node));

head->data = 10;
head->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = fourth;

fourth->data = 40;
fourth->next = NULL;

int item=5;

int item2,ch,num;
printf("\nEnter your choice : \n1 - To insert at Begininig\n2 - To search a number\n3 - To insert at Begining\n4 - To Traverse in Reverse Order : \n5 - To insert at the End\n6 - To insert after any Element\n7 - Delete from End\n8 - To delete from End\n");
scanf("%d",&ch);
switch(ch){
    
    case 1 : printList(head);
             break;
    case 2 : printf("Enter the number to search : ");
             scanf("%d",&num); 
             searchInSorted(head,item2);
             break;
    case 3 : printf("Enter the number to insert at begining : ");
             scanf("%d",&num); 
             insertAtBegining(&head,num);
             printList(head);
             break;

    case 4 : traverseInReverseOrder(head);
             break;
    case 5 : printf("Enter the number to insert at End : ");
             scanf("%d",&num); 
             insertAtEnd(&head,num);
             printList(head);
             break;
    case 6 : printf("Enter the number to insert after element ? : ");
             scanf("%d",&item);
             printf("Enter the element to insert : ");
             scanf("%d",&num); 
             insertAfterElement(head,item,num);
             printList(head);
             break;
    case 7 : printf("Before : ");
             printList(head);
             deleteFromBegining(&head);
             printf("\n After : ");
             printList(head);
             break;
    case 8 : printf("Before : ");
             printList(head);
             deleteFromEnd(&head);
             printf("\n After : ");
             printList(head);
             break;
    case 9 : exit;
        
}
return 0;
}
Node* searchInSorted(Node *head,int item2){
    while(head!=NULL){
        if((head->data)==item2){
        printf("itemfound\n");
        return head;
        }
        else if(item2<(head->data)){
            return NULL;
        }
        else head=(head->next);
    }
    printf("item not found in the list \n1");
}
void *insertAtBegining(Node* *head,int item2){
    Node *ptr;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = item2;
    if(*head==NULL){
        ptr->next=NULL;
    }
    else {
        ptr->next = *head;
    }
    *head=ptr;
}
void traverseInReverseOrder(Node *head){
    if(head->next!=NULL){
        traverseInReverseOrder(head->next);
    }
        printf("%d ",head->data);
    
}
void insertAtEnd(Node **head,int item){
    Node *ptr,*loc;
    ptr = (Node *)malloc(sizeof(Node));
    ptr->data = item;
    ptr->next = NULL;
    if(*head==NULL){
        *head = ptr;
    }
    else {
        loc=*head;
        while(loc->next!=NULL){
            loc=loc->next;
        }
        loc->next = ptr;
    }
}
void insertAfterElement(Node *head,int item,int num){
    Node *ptr,*loc;
    loc = searchInSorted(head,item);
    if(loc==(Node*)NULL){
        return;
    }
    ptr=(Node *)malloc(sizeof(Node));
    ptr->data = num;
    ptr->next=loc->next;
    loc->next = ptr;
}
void deleteFromBegining(Node* *head){
    Node *ptr,*loc;
    if(*head==NULL){
        return;
    }
    else{
        loc=*head;
        ptr=*head;
        *head = (*head)->next;
        // loc= loc->next;
        free(ptr);
    }
}
void deleteFromEnd(Node** head){
    Node *ptr,*loc;
    if(*head==NULL){
        return;
    }
    else if((*head)->next==(Node *)NULL){
        ptr=*head;
        *head=NULL;
        free(ptr);
    }
    else {
        loc=*head;
        ptr=(*head)->next;
        while(ptr->next!=NULL){
            loc=ptr;
            ptr=ptr->next;
        }
        loc->next=NULL;
        free(ptr);
    }
}
// void deleteAfterElement(Node *head,int af)