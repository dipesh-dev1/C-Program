//Shortest Job First CPU Scheduling Algorithm
#include<stdio.h>
#define max 10
void main()
{
	int i,j,n,temp,p[max],bt[max],wt[max],tat[max];
	float awt=0;
	float atat=0;

	printf("Enter the number of process:");
	scanf("%d",&n);
	printf("Enter the process number:\n");
	for(i=0;i<n;i++)
    {
		scanf("%d",&p[i]);
	}

	printf("Enter the burst time of the process:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	//sorting process according to burst time using bubble sort
	for(i=0;i<n;i++)
    {
		for(j=0;j<n-i-1;j++)
		{
			if(bt[j]>bt[j+1])
			{
				temp=bt[j];
				bt[j]=bt[j+1];
				bt[j+1]=temp;
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	printf("process\t burst time\t waiting time\t turn around time\n");
	for(i=0;i<n;i++)
	{
		wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++)
		{
			wt[i]=wt[i]+bt[j];
		}
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
	}
	awt = awt/n;
	atat = atat/n;
	printf("average waiting time is %.2f\n",awt);
	printf("average turnaround time is %.2f\n",atat);
}
