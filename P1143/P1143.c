#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int input;
	scanf("%d",&input);
	char num1[100];
	scanf("%s",&num1);
	int length=strlen(num1);
	int output;
	scanf("%d",&output);
	int sum=0;
	int i=0;
	if(input<=10){
		while(num1[i]!='\0'){
			sum=sum+(num1[i]-48)*pow(input,length-i-1);
			i++;
		}
	}else{
		while(num1[i]!='\0'){
		if(num1[i]=='A'){
			num1[i]=10+48;
		}else if(num1[i]=='B'){
			num1[i]=11+48;
		}else if(num1[i]=='C'){
			num1[i]=12+48;
		}else if(num1[i]=='D'){
			num1[i]=13+48;
		}else if(num1[i]=='E'){
			num1[i]=14+48;
		}else if(num1[i]=='F'){
			num1[i]=15+48; 
		}
		if(num1[i]!='\0'){
			sum=sum+(num1[i]-48)*pow(input,length-i-1);
			i++;
		}
		}
	}
	//printf("%d\n",sum);
	char num2[100]={0};
	int j=0;
	if(output<=10){
		while(sum!=0){
			num2[j]=sum%output;
			sum/=output;
			j++;
		}
		if(num2[j]==0){
			j--;
		}
		while(j>=0){
			
			printf("%d",num2[j]);
			j--;	
		}
	}else{
		while(sum!=0){
			if(sum%output<10){
				num2[j]=sum%output+48;
			}else{
				num2[j]=sum%output;
			}
			sum/=output;
			if(num2[j]>=10){
				if(num2[j]==10){
					num2[j]='A';
				}else if(num2[j]==11){
					num2[j]='B';
				}else if(num2[j]==12){
					num2[j]='C';
				}else if(num2[j]==13){
					num2[j]='D';
				}else if(num2[j]==14){
					num2[j]='E';
				}else if(num2[j]==15){
					num2[j]='F';
				}
			}
			j++;
		}
		if(num2[j]==0){
			j--;
		}
		while(j>=0){
			
			printf("%c",num2[j]);
			j--;	
		}
	}
	return 0;
}
