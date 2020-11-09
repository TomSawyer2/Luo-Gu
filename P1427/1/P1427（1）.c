#include <stdio.h>
int main(){
	int num[100]={0};
	int i=0;
	while(i<=99){
		scanf("%d",&num[i]);
		if(num[i]==0){
			break;
		}
		i++;
	}
	i--;
	for(i;i>0;i--){
		printf("%d ",num[i]);
	}
	printf("%d",num[0]);
	
} 
