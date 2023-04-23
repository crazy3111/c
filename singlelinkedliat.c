#include<stdio.h>
#include<stdlib.h>
struct sll{
int data;
struct sll *next;
}*temp,*head,*tail,*newnode;
void create(){
int d;
if(head==NULL){ 
newnode=(struct sll*)malloc(sizeof(struct sll));
printf("Enter data: ");
scanf("%d",&d);
newnode->data=d;
newnode->next=NULL;
head=newnode;
}
else{
newnode=(struct sll*)malloc(sizeof(struct sll));
printf("Enter data: ");
scanf("%d",&d);
newnode->data=d;
newnode->next=NULL;
for(tail=head;tail->next!=NULL;tail=tail->next);
tail->next=newnode;
}
}
void printlist(struct sll*ptr){
if(ptr==NULL){
printf("list is empty\n");
}
else{
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
}
void insertatbeg(){
int d;
newnode=(struct sll*)malloc(sizeof(struct sll));
printf("Enter data: ");
scanf("%d",&d);
newnode->data=d;
newnode->next=head;
head=newnode;
}
void insertatpos(){
int i;
int d,pos;
printf("Enter position: ");
scanf("%d",&pos);
newnode=(struct sll*)malloc(sizeof(struct sll));
printf("Enter data: ");
scanf("%d",&d);
newnode->data=d;
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
if(temp==NULL){
printf("Error! since the position is not in between\n");
}
else{
tail=temp->next;
temp->next=newnode;
newnode->next=tail;
}
}
void main(){
int a;
while(1){
printf("enter the choice : \n");
printf("1 for creating list \n");
printf("2 for insert at end \n");
printf("3 for insert at beg \n");
printf("4 for insert after position \n");
printf("5 for printing the list \n");
printf("10 to exit\n");
scanf("%d", &a);
switch(a){
case 1: create();
		  break;
case 2: create();
        break;
case 3: insertatbeg();
	     break;
case 4: insertatpos();
        break;
case 5: printlist(head);
        break;
case 10: exit(0);
        break;
}
}
}