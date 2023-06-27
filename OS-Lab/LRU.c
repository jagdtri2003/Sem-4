#include <stdio.h>

int main(){
	int n,i,j,k,l,m,rSize,cur=0,pF=0,flag;
	printf("Enter the number of frames : ");
	scanf("%d",&n);
	printf("Enter the size of reference string : ");
	scanf("%d",&rSize);	
	int rS[rSize];
	int arr[n],temp[n];
	printf("Enter the reference String :");
	for(i=0;i<rSize;i++)
		scanf("%d",&rS[i]);
	for(i=0;i<n;i++){
		arr[i]=-1;
		temp[i]=-1;
	}

	for(i=0;i<rSize;i++){
		flag=0;
		for(j=0;j<n;j++){
			if(arr[j]==rS[i]){
				flag=1;
				break;
			}
			
		}
		if(flag==0){
			m=0;
			for(k=i-1;k>=0;k--){
				for(l=0;l<n;l++){
					if(temp[l]==rS[k]){
						break;
					}
				}
				if(l==n){
					temp[m++]=rS[k];
				}
				if(m==n)
					break;
			}
			int lR=temp[n-1];
			for(k=0;k<n;k++){
				if(arr[k]==lR){
					arr[k]=rS[i];
				}
			}
			pF+=1;
		}
	}

	printf("Total Page fault : %d",pF);
	printf("Page Fault Rate : %f",(float)pF/(float)n);
	
	return 0;
}
