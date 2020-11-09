#include <stdio.h>
int main(){
	char word[200];
	int i;
	gets(word);
	int length=strlen(word);
	int cnt=0;
	while(i<length){
		if(word[i]!='\0'&&word[i]!=' '){
			i++;
			cnt++;
		}else if(word[i]==' '){
			i++;
		}else{
			i++;	
		}
	}
	printf("%d",cnt);
	
	return 0;
}
