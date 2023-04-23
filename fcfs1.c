#include<stdio.h>
int main(){}
// processes  
void findWaitingTime( int processes[ ] , int n , int bt[ ], int wt[ ]) {
    wt[0]=0;
{
for ( int i = 1; i < n; i++)

     wt[i]=bt[i-1]+wt[i-1];
    /* code */
}
void findTurnAroundTime ( int processes[ ], int n,int bt[ ] , int wt [ ] , int tat[ ] ) 
{
    for (int i = 0; i <n; i++)
    tat[i]=bt[i]+wt[i];
    
}
void findavgTime(int processes[], int n, int bt[])  
{  
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
        findWaitingTime(processes, n, bt, wt);  
        printf("Processes Burst time Waiting time Turn around time\n"); 
}