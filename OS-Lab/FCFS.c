#include <stdio.h>

int main(){
	int pro,BT[20],WT[20],TAT[20],i;
	float avgTAT,avgWT,s1=0.0,s2=0.0;
	printf("Enter the number of Processes : ");
	scanf("%d",&pro);
	for(i=0;i<pro;i++){
		printf("Enter the burst Time for Process %d: ",i+1);
		scanf("%d",&BT[i]);
		printf("\n");
	}
	for(i=0;i<pro;i++){
		WT[i]=0;
		TAT[i]=0;
	}
	WT[1]=BT[0];
	for(i=1;i<pro;i++){
		WT[i]=BT[i-1]+WT[i-1];
	}
	for(i=0;i<pro;i++){
		TAT[i]=WT[i]+BT[i];
	}
	for(i=0;i<pro;i++){
		s1+=WT[i];
		s2+=TAT[i];
	}
	avgWT=s1/pro;
	avgTAT=s2/pro;
	printf("AVG WT and TAT is %f and %f \n",avgWT,avgTAT);
	for(i=0;i<pro;i++){
		printf("WT and TAT of process %d is %d and %d\n",i+1,WT[i],TAT[i]);
	}
	return 0;

}