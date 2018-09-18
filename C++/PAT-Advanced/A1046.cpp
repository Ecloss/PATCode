#include<stdio.h>

int main() {
	// 定义N：代表n个出口，M：代表出口的路线 
	int N,M;
	// a[N]：N个路口出口的距离 
	int a[N];
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		// 输入N个出口的距离 
		 int x;
		scanf("%d", &x);
		a[i] = x;
	}
	// 定义p-->q的距离 
	int p[M], q[M];
	// 定义距离的数组
	int num[M]; 
	// 定义M个出口的方法 
	scanf("%d", &M);
	for (int j = 0; j < M; j++) {
		// 输入P出口到q出口的距离 
		int b, c;
		scanf("%d %d", &b, &c);
		p[j] = b;
		q[j] = c;
	}
	for(int i = 0; i < M; i++) {
		if(p[i] < q[i]) {
			for(int k = p[i]; k <= q[i]; k++) {
				num[i] += a[k-1];
			}
		} else {
			for(int l = q[i]; l < p[l]; l++) {
				num[i] += a[l-1];
			}
		}
		printf("%d\n", num[i]);
	} 
	return 0;
} 
