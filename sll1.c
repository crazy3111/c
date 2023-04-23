#include<stdio.h>
#include<stdlib.h>
struct sll{
    int data;
    struct sll* link;
}*root=NULL,*last=NULL,*new_node=NULL,*temp=NULL;
void append();
void insert_at_begin();
void insert_at_inbetween();
void insert_at_end();
void delete_at_begin();
void delete_at_inbetween();
void delete_at_end();
void display();
void exit();
int main(){
    int ch;
    while (1)
    {
    printf("\n1.append\n2.insert_at_begin\n3.insert_at_inbetween\n4.delete_at_begin\n5.delete_at_end\n6.delete_at_inbewteen\n7.display\n.8quit");
    printf("\n\nenter the choice");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:append();
    break;
    case 2:insert_at_begin();
    break;
    case 3:insert_at_end();
    case 4:delete_at_begin();
    break;
    case 5: delete_at_inbetween();
    break;
    case 6:delete_at_end();
    case 7:display();
    break;
    case 8:exit(0);
    default:printf("invalid input\n\n");
    }
    }
    
}
void append(){
    if(root==NULL){
        new_node=(struct sll*)malloc(sizeof(struct sll));
        printf("enter data");
        scanf("%d",&new_node->data);
        new_node->link=NULL;
        root=new_node;

    }
    else{
        new_node=(struct sll*)malloc(sizeof(struct sll));
        printf("enter data");
        scanf("%d",&new_node->data);
        new_node->link=NULL;
        for ( last=root;last->link!=NULL;last=last->link)
        {
                 last->link=new_node;   
        }
        
    
    }
    
}
