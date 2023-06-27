#include <stdio.h>

int main(){
	int n,i,j,rSize,cur=0,pF=0,flag;
	printf("Enter the number of frames : ");
	scanf("%d",&n);
	printf("Enter the size of reference string : ");
	scanf("%d",&rSize);	
	int rS[rSize];
	int arr[n];
	printf("Enter the refernce String :");
	for(i=0;i<rSize;i++)
		scanf("%d",&rS[i]);
	for(i=0;i<n;i++)
		arr[i]=-1;

	for(i=0;i<rSize;i++){
		flag=0;
		for(j=0;j<n;j++){
			if(arr[j]==rS[i])
				flag=1;
			
		}
		if(flag==0){
			arr[cur]=rS[i];
			pF+=1;
			cur=(cur+1)%n;
		}
	}

	printf("Total Page fault : %d",pF);
	printf("Page Fault Rate : %f",(float)pF/(float)n);
	
	return 0;
}
