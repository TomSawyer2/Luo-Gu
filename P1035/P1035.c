#include <stdio.h>
int main(){
	double k;
	int n=1;
	scanf("%lf",&k);
	double sum=0;
	while(sum<=k){
		sum=sum+1.0/n;
		n++;
	}
	printf("%d",n-1);
	return 0;
}
