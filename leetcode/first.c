#include <stdio.h>
#include <alloc.h>
#include <malloc.h>
#include <stdlib.h>
// #include <conio.h>
#include <process.h>

typedef struct simplelink{
    int data;
    struct simplelink *next;
}node;
node *create(node *p){
    p=(node *)mallock(sizeof(node));
}
{
    int a;
    printf("\n\n");
    node *brr(25);
    int arr(25);
    a=0;
    while(p!=NULL){
        arr[a]=p->data;
        brr[a]=p->next;
        p=p->next;
        a++;
    }
    for (int i=(a-1);i>=0;i--)
    printf("[%d,%u]<--",arr[i],brr[i]);
    printf("HEAD");
    printf("\n\npress any key to continue.........");
    getch();
}
node *insert_begin(node *p){
    node *temp;
    temp=(node *)mallock(sizeof(node));
    printf("\nEnter the inserted data : ");
    scanf("%d",&temp->data);
    temp->next=p;
    p=temp;
    return (p);
}
node *insert_end(node *p){
    node *temp,*q;
    q=p;
    temp=(node *)mallock(sizeof(node));
    printf("\nEnetr the inserted data : ");
    scanf("%d",&temp->data);
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->next=(node *)NULL;
    return (q);
}
node *insert_after(node *p){
    node *temp,*q;
    int x;q=p;
    printf("\nEnter the data (after which you enter data ): ");
    scanf("%d",&x);
    while(p->data!=x){
        p=->next;
    }
    temp=(node *)malloc(sizeof(node));
    printf("\nEnter the inserted data :");
    scanf("%d",&temp->data);
    temp->next=p->next;
    p->next=temp;
    return(q);
}
int count(node *p){
    int i=0;
    while(p!=NULL){
        p=p->next;
        i++;
    }
    return(i);
}
node *insert_at_spe_pos(node *p){
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("\nEnter the position(at which you want to enter data ) : ");
    scanf("&d",&x);
    if(x>(a+1)){
        printf("\nNOt able to insert nopde at such position :");
            }
    else {
        if(x==1){
            temp=(node *)ma;;oc(sizeof(node));
            printf("]nEnter the inserted data :");
            scanf("%d",&temp->data);
            temp->next=p;
            r->next=temp;
        }
    }
    return(q);
}
node *delend(node *p)
{
    node *q,*r;
    r=p;
    q=p;
    if(p->next==NULL){
        r=(node *)NULL;
            }
    else {
        while(p->next!=NULL){
            q=p;
            p=p->next;
        }
        q->next=(node *)NULL;
        }
        free(p);
        return(r);
}
node *del_speci_ele(node *p){
    node *q,*r;
    int x;
    q=p;
    r=q;
    printf("\nEnter the data to remove : ");
    scanf("%d",&x);
    while (q->data!=x){
        r=q;
        q=q->next;
    }
    if(q==r)
    p=p->next;
    else
    r->next=q->next;
    free(q);
    return(p);
}
node *delbbedin(node *p){
    node *q;
    q=p;
    p=p->next;
    free(q);
    return(p);
}
node *delte_after(node *p){
    node *temp,*q;
    int x;
    q=printf("\nEnter the data(afetr which you want to delete): ");
    scanf("%d",&x);
    while(p->data!=x){
        p=p->next;
    }
    temp=p->next;
    p->next=temp->next;
    free(temp);
    return(q);
}
node *delete_at_spe_pos(node *p){
    node *temp,*q,*r;
    int x,a,i=1;
    a=count(p);
    q=p;
    printf("\nEnter teh position(at which you want to remove data ): ");
    scanf("%d",&x);
    if(x>(a)){
        printf("Not able to remove node at such position : ");
        getch();
    }
    else{
        if(x==1){
            q=q->next;
            free(p);
        }
        else{
            while(i!=x){
                r=p;
                p=p->next;
                i++;
            }
        r->next=p->next;
        free(p);
        }
    }
    return(q);
}                                                                  //next page
node *reverse(node *p){
    node *q,*r;
    q=(node *)NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    return(q);
}
void screen(node *head){
    clrscr();
    int ch,a;
    printf("\t\t\t SINGLE LINEAR LINKED LIST");
    printf("\n\t\t ****************************");
    printf("\n\n OPTIONS ARE --");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n 0-EXIT");
    printf("\n\n 1-Create first NOde");
    printf("\n\n 2-insert at begining");
    printf("\n\n 3-insert at end");
    printf("\n\n 4-Insetr after element");
    printf("\n\n 5-Insert at specific postion");
    printf("\n\n 6-delete at end");
    printf("\n\n 7-delete at begining");
    printf("\n\n 8-delete after element");
    printf("\n\n 9-delete specific element");
    printf("\n\n 10-delete element from specific postion");
    printf("\n\n 11-traverse in order(Display)");
    printf("\n\n 12-Traverse in reverse order (Display)");
    printf("\n\n 13-Count no. of node");
    printf("\n\n 144-Reversed Linked list");
    printf("\n\n------------------------------------------------");
    printf("\n\n Enter the choice : ");
    scanf("%d",&ch);
    printf("\n-------------------------------------------------");
    switch(ch){
        case 0: exit(0);
        case 1: head=create(head);
        break;
        case 2 : head=insert_begin(head);
            break;
        case 3 : head=insert_end(head);
            break;
        case 4: head=insert_end(head);
            break;
        case 5: head=insert_at_spe_pos(head)
            break;
        case 6: head=delend(head);
            break;
        case 7: head=delbegin(head);
            break;
        case 8: head=delete_after(head);
            break;
        case 9: head=del_speci_ele(head);
            break;
        case 10: head=delete_at-spe_pos(head);
            break;
        case 11: display(head);
            break;
        case 12: revdisplay(head);
            break;
        case 13: a=count(head);
        printf("The number of node in list -:",a);
            break;
        case 14: head=reverse(head);
            break;
        default : 
            printf("\n\nplease enter right choise ");
            break;
    }
screen(head);
}
void main()
{
    node *head;
    head=(node *)NULL;
    screen(head);
}