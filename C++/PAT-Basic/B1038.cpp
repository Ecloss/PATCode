#include<cstdio>
#include<cstring>

const int maxn = 100010;
int main() {
	int n, k, x;
	int grade[110] = {0}, temp[maxn];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &x);
		grade[x]++;
	}
	scanf("%d", &k);
	for(int i = 0; i < k; i++) {
		scanf("%d", &x);
		temp[i] = grade[x];
	}
	for(int i = 0; i < k; i++) {
		printf("%d", temp[i]);
		if(i != k-1) printf(" ");
	}
	return 0;
} 
