#include<stdio.h>

int main() {
	int z, k;
	float x;
	float a[1001] = {0}, t;
	for(int i = 0; i < 2; i++) {
		scanf("%d", &k);
		for(int j = 0; j < k; j++) {
			scanf("%d %f", &z, &x);
			a[z] += x;
		}
	} 
	int num = 0;
	for(int i = 0; i < 1001; i++) {
		if(a[i] != 0) {
			num++;
		}
	}
	printf("%d", num);
	for(int i = 2000; i >= 0; i--) {
		if(a[i] != 0.0) printf(" %d %.1f", i, a[i]);
	}
	return 0;
}

