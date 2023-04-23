#include<stdio.h>
#include<conio.h>
#define max 30
void main(){

    int n ,i,j,at[max],bt[max],wt[max],tat[max],temp[max];
    float awt=0,atat=0;
    printf("enter no  of process");
    scanf("%d",&n);
    printf("enter burst time of process");
    for(i=0;i<n;i++)
    scanf("%d",&bt[i]);
    printf("enter arrival time of the process");
     for(i=0;i<n;i++)

    scanf("%d",&at[i]);
    temp[0]=0;
    printf("procss\t burst time\t arrival time\t wating time\t turn around time");
    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]+bt[i];
        tat[i]=wt[i]+at[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d",i+1,bt[i],at[i],wt[i],tat[i]);

    }
    awt=awt/n;
    atat=atat/n;
    printf("average watinf time is%f\n ",awt);

    printf("average turn around  time is%f ",atat);
}


// C program for implementation of FCFS
// scheduling
#include<stdio.h>
// Function to find the waiting time for all
// processes
// void findWaitingTime(int processes[], int n,
// 						int bt[], int wt[])
// {
// 	// waiting time for first process is 0
// 	wt[0] = 0;

// 	// calculating waiting time
// 	for (int i = 1; i < n ; i++ )
// 		wt[i] = bt[i-1] + wt[i-1] ;
// }

// // Function to calculate turn around time
// void findTurnAroundTime( int processes[], int n,
// 				int bt[], int wt[], int tat[])
// {
// 	// calculating turnaround time by adding
// 	// bt[i] + wt[i]
// 	for (int i = 0; i < n ; i++)
// 		tat[i] = bt[i] + wt[i];
// }

// //Function to calculate average time
// void findavgTime( int processes[], int n, int bt[])
// {
// 	int wt[n], tat[n], total_wt = 0, total_tat = 0;

// 	//Function to find waiting time of all processes
// 	findWaitingTime(processes, n, bt, wt);

// 	//Function to find turn around time for all processes
// 	findTurnAroundTime(processes, n, bt, wt, tat);

// 	//Display processes along with all details
// 	printf("Processes Burst time Waiting time Turn around time\n");

// 	// Calculate total waiting time and total turn
// 	// around time
// 	for (int i=0; i<n; i++)
// 	{
// 		total_wt = total_wt + wt[i];
// 		total_tat = total_tat + tat[i];
// 		printf(" %d ",(i+1));
// 		printf("	 %d ", bt[i] );
// 		printf("	 %d",wt[i] );
// 		printf("	 %d\n",tat[i] );
// 	}
// 	int s=(float)total_wt / (float)n;
// 	int t=(float)total_tat / (float)n;
// 	printf("Average waiting time = %d",s);
// 	printf("\n");
// 	printf("Average turn around time = %d ",t);
// }

// // Driver code
// int main()
// {
// 	//process id's
// 	int processes[] = { 1, 2, 3};
// 	int n = sizeof processes / sizeof processes[0];

// 	//Burst time of all processes
// 	int burst_time[] = {10, 5, 8};

// 	findavgTime(processes, n, burst_time);
// 	return 0;
// }
// // This code is contributed by Shivi_Aggarwal
