#include<stdio.h>
#include<conio.h>
void bubbleSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp =a[j];
                a[j+1]=a[j];
                a[j]=temp;
            
            }
        }
    }
}
void printArray(int *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",a[i]);

    }
    printf("\n");
}
void main(){
    int i,n;
    int a[20];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printArray(a,n);
}