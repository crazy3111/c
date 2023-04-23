// #include<stdio.h>
// #define N 5
// int stack[N];
// int top =-1;
// void push();
// void pop();
// //void peek();
// void display();
// int main(){
//     int ch;
//     while(1){
//         printf("\n1.push\n2. pop\n3.peek\n4.display");
//         printf("\n\nenter the choice");
//         scanf("%d",&ch);
//         switch (ch)
//         {case 1: push();
//                 break;
//          case 2: pop();
//                 break;
//        // case 3: peek();
//          //        break;
//         case 3: display();
//                 break;
//                 default:printf("invalid input\n");
//         }
    
//     }
// }
// void push(){
//     int a;
//     printf("enter data\n");
//     scanf("%d",&a);
//     if(top==N-1){
//         printf("overflow\n");
//     }
//     else{
//         top++;
//         stack[top]=a;
//     }
// }
// void pop(){
//     int temp;
//     if(top==-1){
//         printf("\nunder flow");
//     }
//     else{
// temp=stack[top];
// top--;
// printf("%d",temp);
//     }
// }
// // void peek(){
// // if(top==-1){
// //     printf("enpty\n");
// // }
// // else{
// //     printf("%d",stack[top]);
// // }

//  void display(){
//     int i;
//     for(i=top;i>=0;i--){
//         printf("%d",stack[i]);
//     }
//  }




// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}

// Create a new Node
struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
}