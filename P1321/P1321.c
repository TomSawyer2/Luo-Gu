#include <stdio.h>
#include <string.h>
int main(){
	unsigned char word[255];
	scanf("%s",&word);
	//int length=strlen(word);
	//length++;
	//word= (int*)malloc((length)*sizeof(int));
	//length--;
	int i=0;
	int boy=0;
	int girl=0;
	while(i<255){
		if(word[i]=='b'&&word[i+1]!='o'&&word[i+2]!='y'){
			boy++;
			i++;
		}else if(word[i]=='b'&&word[i+1]=='o'&&word[i+2]!='y'){
			boy++;
			i+=2;
		}else if(word[i]=='b'&&word[i+1]=='o'&&word[i+2]=='y'){
			boy++;
			i+=3;
		}else if(word[i-1]!='b'&&word[i]=='o'&&word[i+1]=='y'){
			boy++;
			i+=2;
		}else if(word[i-2]!='b'&&word[i-1]!='o'&&word[i]=='y'){
			boy++;
			i++;
		}else if(word[i-1]!='b'&&word[i]=='o'&&word[i+1]!='y'){
			boy++;
			i++;
		}else if(word[i]=='g'&&word[i+1]!='i'&&word[i+2]!='r'&&word[i+3]!='l'){
			girl++;
			i++;
		}else if(word[i]=='g'&&word[i+1]=='i'&&word[i+2]!='r'&&word[i+3]!='l'){
			girl++;
			i+=2;
		}else if(word[i]=='g'&&word[i+1]=='i'&&word[i+2]=='r'&&word[i+3]!='l'){
			girl++;
			i+=3;
		}else if(word[i]=='g'&&word[i+1]=='i'&&word[i+2]=='r'&&word[i+3]=='l'){
			girl++;
			i+=4;
		}else if(word[i-1]!='g'&&word[i]=='i'&&word[i+1]=='r'&&word[i+2]=='l'){
			girl++;
			i+=3;
		}else if(word[i-2]!='g'&&word[i-1]!='i'&&word[i]=='r'&&word[i+1]=='l'){
			girl++;
			i+=2;
		}else if(word[i-3]!='g'&&word[i-2]!='i'&&word[i-1]!='r'&&word[i]=='l'){
			girl++;
			i+=1;
		}else if(word[i-1]!='g'&&word[i]=='i'&&word[i+1]=='l'){
			girl++;
			i+=2;
		}else if(word[i-1]!='g'&&word[i]=='i'&&word[i+1]!='r'){
			girl++;
			i++;
		}else if(word[i-1]!='i'&&word[i]=='r'&&word[i+1]!='l'){
			girl++;
			i++;
		}else if(word[i]=='\0'){
			break;
		}else if(word[i]=='.'){
			i++;
		}
	}
	printf("%d\n",boy);
	printf("%d",girl);
	return 0;
}
