#include <stdio.h>

int main(){
	
	int arr[20][3],rt[20],i,n,rp,tq,time=0;
	float t1=0,t2=0,AvgTat,AvgWt;
	printf("Enter the number of Processes : ");
	scanf("%d",&n);
	printf("Enter the time quantum : ");
	scanf("%d",&tq);
	
	for(i=0;i<n;i++){
		printf("Enter the burst time of P%d : ",i+1);
		scanf("%d",&arr[i][0]);
		rt[i]=arr[i][0];
	}
	rp=n;
	while(rp!=0){
		for (i=0;i<n;i++){
			if(rt[i]!=0){
				if(rt[i]>tq){
					rt[i]-=tq;
					time+=tq;
				}
				else{
					time+=rt[i];
					rt[i]=0;
					rp--;
					arr[i][2]=time;
					arr[i][1]=time-arr[i][0];
				}
			}
		}
	}
	for(i=0;i<n;i++){
		t1+=arr[i][1];
		t2+=arr[i][2];
	}
	AvgWt=t1/n;
	AvgTat=t2/n;
	printf("Process\tBT\tWT\tTAT\n");
	
	for(i=0;i<n;i++){
		printf("P%d\t%d\t%d\t%d\n",i+1,arr[i][0],arr[i][1],arr[i][2]);
	}
	
	printf("Avg Wt=%f and Avg Tat=%f",AvgWt,AvgTat);
	
		
	
	return 0;
}
