#include <stdio.h>
int a,b,c;
int add(int a,int b);
int main(){
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("%d",c);
	return 0;
}
int add(a,b){
	return a+b;
}
