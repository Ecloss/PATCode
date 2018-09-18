#include<stdio.h>
#include<string.h>

char pin[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main() {
	char str[110];
	int num = 0, len, x[4] = {0}, j;
//	scanf("%s", str);
	gets(str);
	len = strlen(str);
	for(int i = 0; i < len; i++) {
		num += str[i] - '0';
	}
	for(j = 0; num != 0; j++) {
		x[j] = num % 10;
		num = num/10;
	}
	for(int i = j-1; i >= 0; i--) {
		printf("%s", pin[x[i]]);
		if(i != 0) printf(" ");
	}
	return 0;
}

