#include <stdio.h>
#include <stdlib.h>
int main(){
	int l,m;
	scanf("%d %d",&l,&m);
	l++;
	int *tree;
	tree= (int*)malloc((l)*sizeof(int));
	l--;
	m++;
	int *u;
	u= (int*)malloc((m)*sizeof(int));
	m--;
	m++;
	int *v;
	v= (int*)malloc((m)*sizeof(int));
	m--;
	m++;
	int *clear;
	clear= (int*)malloc((m)*sizeof(int));
	m--;
	int j=0;
	for(j;j<m;j++){
		scanf("%d %d",&u[j],&v[j]);
	}
	int i=0;
	while(i<=l){
		tree[i]=1;
		i++; 
	} 
	int k=0;
	while(k<m){
		clear[k]=1;
		k++; 
	} 
	int cnt=0;
	for(cnt;cnt<m;cnt++){
		clear[cnt]=u[cnt];
		while(clear[cnt]<=v[cnt]){
			tree[clear[cnt]]=0;
			clear[cnt]++;
		}
	}
	int num=0;
	int trees=0;
	for(num;num<=l;num++){
		if(tree[num]==1){
			trees++;
		}
	}
	printf("%d",trees);
	return 0;
}
