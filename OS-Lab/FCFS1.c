#include <stdio.h>

int main(){
	int pro,Arr[100][4],i,j;
	float avgWt,avgTAT,total=0;
	
	printf("Enter the number of process : ");
	scanf("%d",&pro);
	
	for(i=0;i<pro;i++){
		printf("Enter arrival time and burst time of P%d : ",i+1);
		scanf("%d%d",&Arr[i][0],&Arr[i][1]);
	}	

	Arr[0][2]=0;
	for(i=1;i<pro;i++){
		Arr[i][2]=0;
		for(j=0;j<i;j++){
			Arr[i][2]+=Arr[j][1];
		}
		Arr[i][2]-=Arr[i][0];
		total+=Arr[i][2];
	}
	avgWt=total/pro;
	total=0;
	for(i=0;i<pro;i++){
		Arr[i][3]=0;
		Arr[i][3]+=Arr[i][1]+Arr[i][2];
		total+=Arr[i][3];
	}
	avgTAT=total/pro;
	printf("Output :\nProcess\tAT\tBT\tWT\tTAT\n");
	for(i=0;i<pro;i++){
		printf("P%d\t%d\t%d\t%d\t%d\n",i+1,Arr[i][0],Arr[i][1],Arr[i][2],Arr[i][3]);
	}

	printf("\nAvg WT=%f and Avg TAT=%f",avgWt,avgTAT);

	
	return 0;
}
