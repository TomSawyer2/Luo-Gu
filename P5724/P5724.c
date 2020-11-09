#include <stdio.h>
int main(){
	int n;
	int a[1000];
	for(int cnt=0;cnt<1000;cnt++){
		a[cnt]=-1;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	int j=0;
	while(j<n&&a[j]!=-1){
		if(max<a[j+1]){
			max=a[j+1];
		}
		j++;
	}
	int k=0;
	while(k<n&&a[k]!=-1){
		if(min>a[k+1]&&a[k+1]!=-1){
			min=a[k+1];
		}
		k++;
	}
	printf("%d",max-min);
	return 0;
}
