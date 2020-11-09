#include <stdio.h>
int main(){
	int year,month;
	int year2;
	int out;
	scanf("%d %d",&year,&month);
	year2=year;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		out=31;
	}else if(month==4||month==6||month==9||month==11){
		out=30;
	}else if(month==2){
		if(year/100*100==year2){
			if(year/400*400==year2){
				out=29;
			}else{
				out=28;
			}
		}else if(year/4*4==year2){
			out=29;
		}else{
			out=28;
		}
	}
	printf("%d",out);
	return 0;
}
