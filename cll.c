#include<stdio.h>
#include<stdlib.h>
struct cll{
    int data ;
    struct cll *next;

} *first=NULL,*last=NULL,*temp=NULL,*newnode=NULL;
void create(){
    if (first==NULL){
        newnode=(struct cll*)malloc(sizeof(struct cll));
       printf("enter data");
       scanf("%d",&newnode->data);
       newnode->next=newnode;
       first=newnode;
    }
    else{  
        newnode=(struct cll*)malloc(sizeof(struct cll));
       printf("enter data");
       scanf("%d",&newnode->data);
        
  for(last=first;last->next!=first;last=last->next);
  last->next=newnode;
  newnode->next=first;
    
    }
}
void insert_at_begin(){
        newnode=(struct cll*)malloc(sizeof(struct cll));
       printf("enter data");
       scanf("%d",&newnode->data);
       for(last=first;last->next!=first;last=last->next);
       newnode->next=first;
       first=newnode;
       last->next=first;
      
}
void insert_at_inbetween(){
    int n;
        newnode=(struct cll*)malloc(sizeof(struct cll));
        printf("enter data you want to insert");
        scanf("%d",&n);
       printf("enter data");
       scanf("%d",&newnode->data);
       for(temp=first;temp->data!=n;temp=temp->next);
       last=temp->next;
       temp->next=newnode;
       newnode->next=last;

}
void delete_at_begin(){
    for(last=first;last->next!=first;last=last->next);
    temp=first;
    first=temp->next;
    free(temp);
    last->next=first;
}
 void delete_at_end(){
    for(temp=first;temp->next->next!=first;temp=temp->next);
    free(temp->next);
    temp->next=first;
 }
 void delete_at_inbetweem(){
    int n;
    printf("enter the num  you want to delete");
    scanf("%d",&n);
    for(temp=first;last->next->data!=n;temp=temp->next);
    free(temp->next);
    temp->next=first;

 }
void display(){
    if(first==NULL){
        printf("empty");

    }else{
        for(temp=first;temp->next!=first;temp=temp->next){
            printf("%d\n",temp->data);
        }
         printf("%d\n",temp->data);
    }
}void main()
{
	int a;
	while(1)
	{
		printf("enter the choice :\n");
		printf("1 create :\n");
		printf("2  insert_at_begin :\n");
		printf("3 insert_at_inbetween :\n");
		printf("4 delete_at_begin :\n");
		printf("5 delete_at_end :\n");
		printf("6  delete_at_inbetweem :\n");
		printf("7 display :\n");
		printf("8 exit :\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1: create();
			break;
			case 2:  insert_at_begin();
			break;
			case 3: insert_at_inbetween();
			break;
			case 4: delete_at_begin();
			break;
			case 5: delete_at_end();
			break;
			case 6: delete_at_inbetweem();
			break;
			case 7: display();
			break;
			case 8: exit(0);
			break;
		}
	}
 }
