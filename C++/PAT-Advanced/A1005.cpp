#include<stdio.h>
#include<string.h>

char let[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
int main() {
	// n��������ֵ 
	char n[110];
	int a[10] = {0};
	// num������������λ��֮�� , k �������㳤�͵ĳ��� 
	int num = 0, k = 0;
	gets(n);
	int len = strlen(n);
	for(int i = 0; i < len; i++) {
		num += n[i] - '0';
	}
	if(num == 0) a[k++] = 0;
	while(num != 0) {
		a[k++] = num % 10;
		num = num / 10;
	}
	for(int i = k - 1; i >= 0; i--) {
		printf("%s", let[a[i]]);
		if(i != 0) printf(" ");
	}
	return 0;
}
