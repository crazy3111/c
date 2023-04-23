 #include<stdio.h>
 #include<stdlib.h>
 struct cll{
    int data;
    struct cll*next;
 
 }*first,*temp,*newnode,*last;
 void append();
 void insert_at_begin();
  void insert_at_inbetween();
  void delete_at_begin();
   void delete_at_end();
   void delete_at_inbetween();
   void display();
   void main(){
    int ch;
    while (1)
    {
        printf("1.append\n");
        printf("2.insert_at_begin\n");
         printf("3.delete_at_begin\n");
        printf("4.insert_at_inbetween\n");
        printf("5.delete_at_end\n");
        printf("6.delete at inbetween\n");
        printf("7.display\n");
        printf("8.exit\n");
        printf("\n\n enter choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: append();
                break;
        case 2: insert_at_begin ();
                break;
        case 3: delete_at_begin();
                break;
        case 4: insert_at_inbetween();
                break;
        case 5: delete_at_end();
                break;
        case 6: delete_at_inbetween(); 
                break;  
        case 7: display();
                break;
        case 8: exit(0);
        default: printf("invalid imput");
        }
    }
   }
   void append(){
   if(first==NULL){
    newnode=(struct cll*)malloc(sizeof(struct cll));
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->next=newnode;
    first=newnode;
   }
   else{
      newnode=(struct cll*)malloc(sizeof(struct cll));
    printf("enter the data");
    scanf("%d",&newnode->data);
    for(last=first;last->next!=first;last=last->next);
        last->next=newnode;
        newnode->next=first;
    }
   }
   void insert_at_begin(){
      newnode=(struct cll*)malloc(sizeof(struct cll));
    printf("enter the data");
    scanf("%d",&newnode->data);
    for(last=first;last->next!=first;last=last->next);
        newnode->next=first;
        first=newnode;
        last->next=first;   
    }
    void insert_at_inbetween(){
        int n;
          newnode=(struct cll*)malloc(sizeof(struct cll));
    printf("enter the data");
    scanf("%d",&n);
    printf("enter the data for ");
    scanf("%d",&newnode->data);
    for(temp=first;temp->data!=n;temp=temp->next);
    if(temp==NULL){
        printf("element not found");}
     else{
        last=temp->next;
        temp->next=newnode;
        newnode->next=last;
     }   
    }   
    void delete_at_begin(){
        for(last=first;last->next!=first;last=last->next);
        temp=first->next;
        free(first);
        first=temp;
        last->next=first;
    }
    void delete_at_end(){
        for(last=first;last->next->next!=first;last=last->next);
        free(last->next);
        last->next=first;
    }
    void delete_at_inbetween(){
        int n;
        printf("enter data you wnt to delete");
        scanf("%d",&n);
        for(temp=first; temp->next->data!=n;temp=temp->next);
        if(temp==NULL)
        {
            printf("element is not found");

        }
        else{
            last=temp->next->next;
            free(temp->next);
            temp->next=last;

        }
    }
   void display(){
    temp=first;
    if(temp==NULL){
        printf("no node in the list\n");
    }
    else{
        do
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }while(temp!=first);
        printf("\n\n");
        
    }
   }
   
   