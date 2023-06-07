#include <stdio.h>

int main(){
	int n,m,i,j;
	printf("Enter the number of process and resource types :");
	scanf("%d%d",&n,&m);
	int allo[n][m],max[n][m],avail[m],need[n][m],flag[n],rp=n;
	for(i=0;i<n;i++)
		flag[i]=0;
	printf("Enter Allocation Matrix : \n");
	for(i=0;i<n;i++){
		printf("P%d :",i);
		for(j=0;j<m;j++){
			scanf("%d",&allo[i][j]);
		}
	}
	printf("Enter Max Matrix : \n");
	for(i=0;i<n;i++){
		printf("P%d :",i);
		for(j=0;j<m;j++){
			scanf("%d",&max[i][j]);
		}
	}
	printf("Enter Available : \n");
	for(i=0;i<m;i++){
		scanf("%d",&avail[i]);
		
	}
	printf("RUNNING 0");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			need[i][j]=max[i][j]-allo[i][j];
		}
	}
	printf("RUNNING 1");
	while(rp!=0){
		for(i=0;i<n;i++){
			if(flag[i]==0){
				for(j=0;j<m;j++){
					if(need[i][j]>avail[j])
						break;
				}
				if(j==m){
					flag[i]=1;
					for(j=0;j<m;j++){
						avail[j]+=allo[i][j];
					}
					rp--;
					printf("P%d  ",i);
				}
			}
		}
	}
	return 0;
}
