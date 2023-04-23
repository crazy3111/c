#include<stdio.h>

printarray(int *A,int n){
    for(int i=0;i<n;i++){
    printf("%d",A[i]);

    }
    printf("\n");

}


// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high]; // pivot
//     int i=low-1;
       
  
//     for (int j = low; j <= high ; j++) {
//         // If current element is smaller than the pivot
//         if (arr[j] < pivot) {
//             i++; // increment index of smaller element
//            int temp=arr[i];
//            arr[i]=arr[j];
//            arr[j]=temp;
//         }
//     }
//   int temp=arr[i+1];
//   arr[i+1]=arr[high];
//   arr[high]=temp;
// return (i+1);
// }
// void quicksort(int arr,low,high){
// if(low<high){
//     int pivotind=partation(arr,low,high);
//     quicksort(arr,low,pivotind-1);
//     quicksort(arr,pivotind+1,high);

void insertionsort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        while (j>=0 &&a[j>temp])
        {
            a[j+1]=a[j];
            j=j-1;
            }
            arr[j+i]=temp;
        }
    }
int main(){
    int A[]={3,5,2,7,13,2,11};
    int  n=7;
    printarray(A,n);
    // quicksort(A,0,n-1);
    insertionsort(A,n);
    printarray(A,n);
    return 0;