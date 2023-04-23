#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void linkedlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct  node *insertatFirst(struct node*head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    head=ptr;
    return ptr; 
}
struct node *insertiatindex(struct node*head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p=head;
int i=0;
while (i!=index-1)
{
    p=p->next;
    i++;
    
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
}
struct node*deleteatfidst(struct node *head){
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}



int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    printf("4");
    scanf("%d", &head->data);
    head->next = second;
    second->data = 12 ;
    second->next = third;
    third->data = 33;
    third->next =fourth;
    fourth->data=30;
    fourth->next=NULL;
    linkedlist(head);
    // printf("after\n");
    printf("print after  first\n ");
    head =insertatFirst(head,77);
    linkedlist(head); 
    printf("insert after index\n");
    head=insertiatindex(head,37,2);
   printf("before delete\n");
    linkedlist(head); 
    head =deleteatfidst(head);
    printf("after delete\n");
    linkedlist(head);
    return 0;
}