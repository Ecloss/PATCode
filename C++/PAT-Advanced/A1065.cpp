#include<stdio.h>
const int num = 100005;

int main() {
//	int a,b,c;
	int T;
	scanf("%d", &T);
	long long a[num], b[num], c[num];
	for(int i = 0; i < T; i++) {
		scanf("%lld%lld%lld", &a[i], &b[i], &c[i]);
	}
	for(int j = 0; j < T; j++) {
		if((a[j] + b[j]) > c[j]) {
			printf("Case #%d: true\n", j+1);
		} else {
			printf("Case #%d: false\n", j+1);
		} 
	} 
	return 0;
}
