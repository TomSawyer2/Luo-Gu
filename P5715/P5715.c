#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		int t;
		t=a;
		a=b;
		b=t;
	}
	if(b>c){
		int u;
		u=b;
		b=c;
		c=u;
	}
	if(a>b){
		int j;
		j=a;
		a=b;
		b=j;
	}
	printf("%d %d %d",a,b,c);
}
