#include <stdio.h>

int main(){

	int arr[20][5],i,j,n,temp,idx;
	float total=0,avgWt,avgTat;
	printf("Enter the number of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		arr[i][0]=i+1;
		printf("Enter the burst time and priority of P%d : ",i+1);
		scanf("%d%d",&arr[i][1],&arr[i][2]);
	}	
	
	// Sorting Process Acc. to their priority 
	
	for(i=0;i<n;i++){
		idx=i;
		for(j=i+1;j<n;j++){
			if(arr[idx][2]>arr[j][2])
				idx=j;
		}
		if (idx!=i){
			temp=arr[idx][2];
			arr[idx][2]=arr[i][2];
			arr[i][2]=temp;
			
			temp=arr[idx][0];
			arr[idx][0]=arr[i][0];
			arr[i][0]=temp;
			
			temp=arr[idx][1];
			arr[idx][1]=arr[i][1];
			arr[i][1]=temp;
		}
	}
	
	// Calculating WT
	
	arr[0][3]=0;
	for(i=1;i<n;i++){
		arr[i][3]=0;
		for(j=0;j<i;j++){
			arr[i][3]+=arr[j][1];
		}
		total+=arr[i][3];
	}
	avgWt=total/n;
	total=0;
	
	// Calculating TAT
	
	for(i=0;i<n;i++){
		arr[i][4]=arr[i][1]+arr[i][3];
		total+=arr[i][4];
	}
	avgTat=total/n;
	
	printf("Process\tBT\tPri.\tWT\tTAT\n");
	
	for(i=0;i<n;i++){
		printf("P%d\t%d\t%d\t%d\t%d\n",arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4]);
	}
	printf("Avg Wt=%f and Avg Tat=%f",avgWt,avgTat);
	return 0;
}
