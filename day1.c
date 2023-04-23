#include<stdio.h>
#include<stdlib.h>
struct sll{
    int data ;
    struct sll *next;
}*first,*last,*temp,*new_node;
void create(){
    if(first==NULL){
        new_node=(struct sll*)malloc(sizeof(struct sll*));
        printf("enter data");//new_node->next=NULL;
        scanf("%d",&new_node->data);
      new_node->next=NULL;
        first=new_node;
    }
    else{
           new_node=(struct sll*)malloc(sizeof(struct sll*));
        printf("enter data");
      
        scanf("%d",&new_node->data);
        //   new_node->next=NULL;
        for(last=first;last->next!=NULL;last=last->next);
        new_node->next=NULL;
        last->next=new_node;

    }
}
void insert_at_begin(){
     new_node=(struct sll*)malloc(sizeof(struct sll*));
        printf("enter data");
        scanf("%d",&new_node->data);
        new_node->next=first;
        first=new_node;
    
}
void insert_at_inbetweeen(){
    int n;
      printf("enter no you want to insert");
        scanf("%d",&n);
     new_node=(struct sll*)malloc(sizeof(struct sll*));
        printf("enter data");
        scanf("%d",&new_node->data);
      
        for(temp=first;temp->data!=n;temp=temp->next);
        last=temp->next;
        new_node->next=last;
        temp->next=new_node; 
}
void delete_at_begin(){
    temp=first;
    first=temp->next;
    free(temp);
}
void delete_at_inbetween(){
    int n;

        printf("enter data where you need to delete");
        scanf("%d",&n);
        for(temp=first;temp->next->data!=n;temp=temp->next);
        last=temp->next->next;
        free(temp->next);
        temp->next=last;
}
void delete_at_end(){
    for(last=first;last->next->next!=NULL;last=last->next);
    free(last->next);
    last->next=NULL;
}
void display(){
    if(first=NULL){
        printf("list is empty");
    }
    else{
        for(temp=first;temp!=NULL;temp=temp->next){
            printf("%d\n",temp->data);
        }
    }
}
void main()
{
	int a;
	while(1)
	{
		printf("enter the choice :\n");
		printf("1 create :\n");
		printf("2  insert_at-begin :\n");
		printf("3 insert_at_inbetweeen :\n");
		printf("4 delete_at_begin :\n");
		printf("5 delete_at_inbetween :\n");
		printf("6  delete_at_end :\n");
		printf("7 display :\n");
		printf("8 exit :\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1: create();
			break;
			case 2:  insert_at_begin();
			break;
			case 3: insert_at_inbetweeen();
			break;
			case 4: delete_at_begin();
			break;
			case 5: delete_at_inbetween();
			break;
			case 6: delete_at_end ();
			break;
			case 7: display();
			break;
			case 8: exit(0);
			break;
		}
	}
 }
// #include<stdio.h>
// #include<stdlib.h>

// struct sll
// {
// 	int data;
// 	struct sll *next;
// }*head,
//  *tail,
//  *new,
//  *temp;

// void create()
// {
// 	if(head==NULL)
// 	{
// 		new=(struct sll*)malloc(sizeof(struct sll));
// 		printf("enter data :");
// 		scanf("%d",&new->data);
// 		new->next=NULL;
// 		head=new;
// 	}
// 	else
// 	{
// 		new=(struct sll*)malloc(sizeof(struct sll));
// 		printf("enter data :");
// 		scanf("%d",&new->data);
// 		new->next=NULL;
// 		for(tail=head;tail->next!=NULL;tail=tail->next);
// 		tail->next=new;
// 	}
// }

// void insertatbeg()
// {
// 	new=(struct sll*)malloc(sizeof(struct sll));
// 	printf("enter data :");
// 	scanf("%d",&new->data);
// 	new->next=head;
// 	head=new;
// }

// void insertinbet()
// {
// 	int num;
// 	printf("enter number");
// 	scanf("%d",&num);
// 	new=(struct sll*)malloc(sizeof(struct sll));
// 	printf("enter data :");
// 	scanf("%d",&new->data);
// 	for(temp=head;temp->data!=num;temp=temp->next);
// 	tail=temp->next;
// 	temp->next=new;
// 	new->next=tail;
// }

// void delatbeg()
// {
// 	temp=head;
// 	head=temp->next;
// 	free(temp);
// }

// void delatend()
// {
// 	for(tail=head;tail->next->next!=NULL;tail=tail->next);
// 	free(tail->next);
// 	tail->next=NULL;
// }

// void delatpos()
// {
// 	int num;
// 	printf("enter the number to be del ");
// 	scanf("%d",&num);
// 	for(temp=head;(temp->next)->data!=num;temp=temp->next);
// 	tail=temp->next->next;
// 	free(temp->next);
// 	temp->next=tail;
// }

// void display()
// {
// 	if(head==NULL)
// 	{
// 		printf("list is empty ");
// 	}
// 	else
// 	{
// 		for(temp=head;temp!=NULL;temp=temp->next)
// 		{
// 			printf("%d\n",temp->data);
// 		}
// 	}
// }

// void main()
// {
// 	int a;
// 	while(1)
// 	{
// 		printf("enter the choice :\n");
// 		printf("1 create :\n");
// 		printf("2 insertatbeg :\n");
// 		printf("3 insertinbet :\n");
// 		printf("4 delatbeg :\n");
// 		printf("5 delatend :\n");
// 		printf("6 delatpos :\n");
// 		printf("7 display :\n");
// 		printf("8 exit :\n");
// 		scanf("%d",&a);
// 		switch(a)
// 		{
// 			case 1: create();
// 			break;
// 			case 2: insertatbeg();
// 			break;
// 			case 3: insertinbet();
// 			break;
// 			case 4: delatbeg();
// 			break;
// 			case 5: delatend();
// 			break;
// 			case 6: delatpos();
// 			break;
// 			case 7: display();
// 			break;
// 			case 8: exit(0);
// 			break;
// 		}
// 	}
// }