// 利用for循环来输出三个数字，在循环中，将RGB值存入
#include<stdio.h>

int main() {
	int len = 0, n;
	int a[3], b[6] = {0};
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	for(int i = 0; i < 3; i++) {
		len = 0;
		while(a[i] != 0) {
			b[2*i + len] = a[i] % 13;
			len++;
			a[i] = a[i] / 13;
		}
	}
	printf("#%d%d%d%d%d%d", b[1], b[0], b[3], b[2], b[5], b[4]);
	return 0;
} 
