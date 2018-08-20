#include<stdio.h>
#include<string.h>
// 思路，length = (n +2) / 3 就是U字型的高  
// 宽度：weight = n - 2*length + 2
// 设置一个数组，将输入的放在数组中 
// l决定了外循环几次，w决定了内循环几次 

int main() {
	char str[85];
	gets(str);
	int N = strlen(str);
	int n1 = (N+2)/3, n3 = n1, n2 = N + 2 - 2*n1;
	for(int i = 0; i < n1-1; i++) {
		printf("%c", str[i]);
		for(int j = 0; j < n2-2; j++) printf(" ");
		printf("%c\n", str[N-1-i]);
	}
	for(int i = 0; i < n2; i++) {
		printf("%c", str[n1-2+i]);
	} 
	return 0;
} 

