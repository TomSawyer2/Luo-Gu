#include <stdio.h>
int main(){
	int n;
	int t=0;
	int swap=0;
	scanf("%d",&n);
	int num[10000];
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(int j=0;j<n;j++){
		for(int k=0;k<n-1;k++){
			if(num[k]>num[k+1]){
				t=num[k];
				num[k]=num[k+1];
				num[k+1]=t;
				swap++;
			}
		}
	}
	printf("%d",swap);
	return 0;
}
