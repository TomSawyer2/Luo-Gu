#include <stdio.h>
void turn();
int main(){
	turn();
	return 0;
}
void turn(){
	int num;
	scanf("%d",&num);
	if(num!=0){
		turn();
	}
	if(num!=0){
		printf("%d ",num);
	}
}
