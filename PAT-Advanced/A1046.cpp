#include<stdio.h>

int main() {
	// ����N������n�����ڣ�M��������ڵ�·�� 
	int N,M;
	// a[N]��N��·�ڳ��ڵľ��� 
	int a[N];
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		// ����N�����ڵľ��� 
		 int x;
		scanf("%d", &x);
		a[i] = x;
	}
	// ����p-->q�ľ��� 
	int p[M], q[M];
	// ������������
	int num[M]; 
	// ����M�����ڵķ��� 
	scanf("%d", &M);
	for (int j = 0; j < M; j++) {
		// ����P���ڵ�q���ڵľ��� 
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
