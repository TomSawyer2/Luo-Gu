#include <stdio.h>
int main(){
	int map[500][500];//0Îª°µ£¬1ÎªÁÁ 
	int n=0,m=0,k=0;
	scanf("%d %d %d",&n,&m,&k);
	//int torch[104][104];
	int torchx[105];
	int torchy[105];
	int stonex[105];
	int stoney[105];
	int dark=0;
	for(int cnt1=0;cnt1<m;cnt1++){
		scanf("%d %d",&torchx[cnt1],&torchy[cnt1]);
		map[torchx[cnt1]+1][torchy[cnt1]+1]=1;
		map[torchx[cnt1]][torchy[cnt1]+1]=1;
		map[torchx[cnt1]-1][torchy[cnt1]+1]=1;
		map[torchx[cnt1]+2][torchy[cnt1]+1]=1;
		map[torchx[cnt1]+3][torchy[cnt1]+1]=1;
		map[torchx[cnt1]+1][torchy[cnt1]+2]=1;
		map[torchx[cnt1]+1][torchy[cnt1]+3]=1;
		map[torchx[cnt1]+1][torchy[cnt1]]=1;
		map[torchx[cnt1]+1][torchy[cnt1]-1]=1;
		map[torchx[cnt1]][torchy[cnt1]+2]=1;
		map[torchx[cnt1]][torchy[cnt1]]=1;
		map[torchx[cnt1]+2][torchy[cnt1]+2]=1;
		map[torchx[cnt1]+2][torchy[cnt1]]=1;
	}
	if(k!=0){
		for(int cnt2=0;cnt2<k;cnt2++){
		scanf("%d %d",&stonex[cnt2],&stoney[cnt2]);
		map[stonex[cnt2]+1][stoney[cnt2]+1]=1;
		map[stonex[cnt2]][stoney[cnt2]+1]=1;
		map[stonex[cnt2]-1][stoney[cnt2]+1]=1;
		map[stonex[cnt2]+2][stoney[cnt2]+1]=1;
		map[stonex[cnt2]+3][stoney[cnt2]+1]=1;
		
		map[stonex[cnt2]+1][stoney[cnt2]+2]=1;
		map[stonex[cnt2]+1][stoney[cnt2]+3]=1;
		map[stonex[cnt2]+1][stoney[cnt2]]=1;
		map[stonex[cnt2]+1][stoney[cnt2]-1]=1;
		
		map[stonex[cnt2]][stoney[cnt2]+2]=1;
		map[stonex[cnt2]][stoney[cnt2]+3]=1;
		map[stonex[cnt2]][stoney[cnt2]]=1;
		map[stonex[cnt2]][stoney[cnt2]-1]=1;
		
		map[stonex[cnt2]-1][stoney[cnt2]+2]=1;
		map[stonex[cnt2]-1][stoney[cnt2]+3]=1;
		map[stonex[cnt2]-1][stoney[cnt2]]=1;
		map[stonex[cnt2]-1][stoney[cnt2]-1]=1;
		
		map[stonex[cnt2]+2][stoney[cnt2]+2]=1;
		map[stonex[cnt2]+2][stoney[cnt2]+3]=1;
		map[stonex[cnt2]+2][stoney[cnt2]]=1;
		map[stonex[cnt2]+2][stoney[cnt2]-1]=1;
		
		map[stonex[cnt2]+3][stoney[cnt2]+2]=1;
		map[stonex[cnt2]+3][stoney[cnt2]+3]=1;
		map[stonex[cnt2]+3][stoney[cnt2]]=1;
		map[stonex[cnt2]+3][stoney[cnt2]-1]=1;
		}
	}
	for(int cntx=2;cntx<n+2;cntx++){
		for(int cnty=2;cnty<n+2;cnty++){
			//printf("%d ",map[cntx][cnty]);
			if(map[cntx][cnty]==0){
				dark++;
			}
		}
		//printf("\n");
	}
	printf("%d",dark);
	return 0;
}
