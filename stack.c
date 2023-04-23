
// // #include <stdio.h>
// // #define SIZE 5

// // void enQueue(int);
// // void deQueue();
// // void display();

// // int items[SIZE], front = -1, rear = -1;

// // int main() {
// //   //deQueue is not possible on empty queue
// //   deQueue();

// //   //enQueue 5 elements
// //   enQueue(1);
// //   enQueue(2);
// //   enQueue(3);
// //   enQueue(4);
// //   enQueue(5);

// //   // 6th element can't be added to because the queue is full
// //   enQueue(6);

// //   display();

// //   //deQueue removes element entered first i.e. 1
// //   deQueue();

// //   //Now we have just 4 elements
// //   display();

// //   return 0;
// // }

// // void enQueue(int value) {
// //   if (rear == SIZE - 1)
// //     printf("\nQueue is Full!!");
// //   else {
// //     if (front == -1)
// //       front = 0;
// //     rear++;
// //     items[rear] = value;
// //     printf("\nInserted -> %d", value);
// //   }
// // }

// // void deQueue() {
// //   if (front == -1)
// //     printf("\nQueue is Empty!!");
// //   else {
// //     printf("\nDeleted : %d", items[front]);
// //     front++;
// //     if (front > rear)
// //       front = rear = -1;
// //   }
// // }

// // // Function to print the queue
// // void display() {
// //   if (rear == -1)
// //     printf("\nQueue is Empty!!!");
// //   else {
// //     int i;
// //     printf("\nQueue elements are:\n");
// //     for (i = front; i <= rear; i++)
// //       printf("%d  ", items[i]);
// //   }
// //   printf("\n");
// // }


// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11
// 12
// 13
// 14
// 15
// 16
// 17
// 18
// 19
// 20
// 21
// 22
// 23
// 24
// 25
// 26
// 27
// 28
// 29
// 30
// 31
// 32
// 33
// 34
// 35
// 36
// 37
// 38
// 39
// 40
// 41
// 42
// 43
// 44
// 45
// 46
// 47
// 48
// 49
// 50
// 51
// 52
// 53
// 54
// 55
// 56
// 57
// 58
// 59
// 60
// 61
// 62
// 63
// 64
// 65
// 66
// 67
// 68
// 69
// 70
// 71
// 72
// 73
// 74
// 75
// 76
// 77
// 78
// 79
// 80
// 81
// 82
// #include<stdio.h>
// #include<process.h>
// #include<stdlib.h>
 
// #define MAX 5 //Maximum number of elements that can be stored
 
// int top=-1,stack[MAX];
// void push();
// void pop();
// void display();
 
// void main()
// {
// int ch;
// while(1) //infinite loop, will end when choice will be 4
// {
// printf("\n*** Stack Menu ***");
// printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
// printf("\n\nEnter your choice(1-4):");
// scanf("%d",&ch);
// switch(ch)
// {
// case 1: push();
// break;
// case 2: pop();
// break;
// case 3: display();
// break;
// case 4: exit(0);
// default: printf("\nWrong Choice!!");
// }
// }
// }
 
// void push()
// {
// int val;
// if(top==MAX-1)
// {
// printf("\nStack is full!!");
// }
// else
// {
// printf("\nEnter element to push:");
// scanf("%d",&val);
// top=top+1;
// stack[top]=val;
// }
// }
 
// void pop()
// {
// if(top==-1)
// {
// printf("\nStack is empty!!");
// }
// else
// {
// printf("\nDeleted element is %d",stack[top]);
// top=top-1;
// }
// }
 
// void display()
// {
// int i;
// if(top==-1)
// {
// printf("\nStack is empty!!");
// }
// else
// {
// printf("\nStack is...\n");
// for(i=top;i>=0;--i)
// printf("%d\n",stack[i]);
// }
// }

11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
 
#define MAX 5 //Maximum number of elements that can be stored
 
int top=-1,stack[MAX];
void push();
void pop();
void display();
 
void main()
{
int ch;
while(1) //infinite loop, will end when choice will be 4
{
printf("\n*** Stack Menu ***");
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
 
void push()
{
int val;
if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}
 
void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}