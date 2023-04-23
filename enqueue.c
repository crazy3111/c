#include<stdio.h>
#define max 5;
int queue[max];
int front=rear=-1;
void enqueue();
void dequeue();
void display();
int main(){

}
void enqueue(){
    int n;
    if(rear===max){
        printf("overflow");
    }else 
    {
        printf("enter the enlement to insert");
        scanf("%d",&n);
        queue[rear]=n;
        rear++;
    }
}
void dequeue(){
    int
}