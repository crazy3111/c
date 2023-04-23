#include<stdio.h>
#include<stdlib.h>
struct sll{
    int data;
    struct sll*next;
}*head,*temp,*last,*newnode;
void create(){
    if(head==NULL){
        newnode=(struct sll*)sizeof(struct sll);
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        head=newnode;
    }
    else{ newnode=(struct sll*)sizeof(struct sll);
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        for(last=head;last->next!=NULL;last=last->next);
        last->next=newnode;
    }
   }
   void insert_at_begin(){
     newnode=(struct sll*)sizeof(struct sll);
        printf("enter data");
        scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

   }
   void insert_at_inbetween(){
    int n;
     newnode=(struct sll*)sizeof(struct sll);
     printf("enter data you want to insert");
     scanf("%d",&n);
        printf("enter data");
        scanf("%d",&newnode->data);
     for(last=head;last->next!=NULL;last=last->next);
    temp=last->next;
    newnode->next=temp;
    last->next=newnode;
         
   }
   

void delete_at_begin(){
    temp=head;
    temp=head->next;
}
void delete_at_inbetween(){
    int n;
    printf("enter the num you want to insert ");
    scanf("%d",&n);
    for(last=head;last->next->data!=n;last=last->next);
    temp=last->next->next;
    free(last->next);
    last->next=temp;
}
void display(){
    if (head==NULL)
    {
        printf("list is empty");
    }else{
        for(temp=head;temp!=head;temp=temp->next){
            printf("%d",temp->data);
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
		printf("2  insert_at_begin :\n");
		printf("3 insert_atinbetween :\n");
		printf("4 delete_at_begin :\n");
		printf("5 delete_at_end :\n");
	//	printf("6  delete_at_inbetweem :\n");
		printf("7 display :\n");
		printf("8 exit :\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1: create();
			break;
			case 2: insert_at_begin();
			break;
			case 3: insert_at_inbetween();
			break;
			case 4: delete_at_begin();
			break;
			case 5: delete_at_inbetween();
			break;
			//case 6: delete_at_inbetweem();
			//break;
			case 7: display();
			break;
			case 8: exit(0);
			break;
		}
	}
 }

