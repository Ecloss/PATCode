#include<stdio.h>
#include<string.h>

int main() {
	char str[85], s[50][85];
	gets(str);
	int len = strlen(str);
	int j = 0, k = 0;
	for(int i = 0; i < len; i++) {
		if(str[i] != ' ') s[j][k++] = str[i];
		else {
			k = 0;
			j++;
		}
	}
	for(int i = j; i >= 0; i--) {
		printf("%s", s[i]);
		if(i > 0) printf(" ");
	}
	return 0;
}
