#include <stdio.h>
#include <string.h>
int main() {
	int m;
	int cnt = 0;
	char n[1001];
	scanf("%d ", &m);
	gets(n);
	cnt = strlen(n);
	
	for (int i = 0; i < cnt; i++) {
		if (n[i] != '0' && i != 0) {
			printf("+");
		}
		if (n[i] == '0') {
			continue;
		}
		printf("%c*%d^%d",n[i],m,cnt-i-1);
	}
	return 0;
}
