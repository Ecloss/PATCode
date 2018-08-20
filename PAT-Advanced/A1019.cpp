#include<stdio.h>

int main() {
	// isFlag 用来判断是否是回文数字,  
	int isFlag = 1, N, b;
	// a[32] 用来存储回文数字的数组, len用来存储回文数的长度 
	int a[32] = {0}, len = 0;
	scanf("%d %d", &N, &b);
	// 此处获得了len的长度，和回文数组N 
	while(N != 0) {
		a[len] = N % b;
		N = N / b;
		len++;
	} 
//	printf("%d %d %d\n", len, N, b);
	// 接下来的问题是怎么将数组进行判断
	for(int i = 0; i < len/2; i++) {
		if(a[i] != a[len-i-1]) isFlag = 0;
	} 
	if(isFlag == 1) printf("Yes\n");
	else printf("No\n");
	for(int i = len-1; i >= 0; i--) {
		if(i != 0) printf("%d ", a[i]);
		else printf("%d", a[i]);
	}
	return 0;
}
