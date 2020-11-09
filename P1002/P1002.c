#include <stdio.h>
int main(){
	int xb=0;
	int yb=0;
	int xc=0;
	int yc=0;
	int x=0;
	int y=0;
	long long f[30][30]={0};
	int g[30][30];
	scanf("%d %d %d %d",&xb,&yb,&xc,&yc);
	g[xc][yc]=1;
	if(xc > 1 && yc != 0){
		g[xc - 2][yc - 1] = 1;
	}
	if(xc < 19 && yc != 0){
		g[xc + 2][yc - 1] = 1;
	}
	if(xc > 1 && yc != 20){
		g[xc - 2][yc + 1] = 1;
	}
	if(xc < 19 && yc != 20){
		g[xc + 2][yc + 1] = 1;
	}
	if(xc != 0 && yc > 1){
		g[xc - 1][yc - 2] = 1;
	}
	if(xc != 0 && yc < 19){
		g[xc - 1][yc + 2] = 1;
	}
	if(xc != 20 && yc > 1){
		g[xc + 1][yc - 2] = 1;
	}
	if(xc != 20 && yc < 19){
		g[xc + 1][yc + 2] = 1;
	} 
	for(x=0;x<=xb;x++){//±éÀúxÖá 
		for(y=0;y<=yb;y++){//±éÀúyÖá 
			if(g[x][y]!=1){
				if(x==0&&y==0){
					f[0][0]=1;
				}else if(x==0&&y>0){
					f[0][y]=f[0][y-1];
				}else if(x>0&&y==0){
					f[x][0]=f[x-1][0];
				}else{
					f[x][y]=f[x-1][y]+f[x][y-1];
				}
			}
		}
	}
	printf("%lld",f[xb][yb]);
	return 0;
}
