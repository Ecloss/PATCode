#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 100010;

int main() {
	int N, M, min, max, min1, max1;
	int a[maxn];
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a+N);
	int num = 0;
	for(int i = 0; i < N; i++) {
		min = a[i];
		for(int j = i+1; j < N; j++) {
			max = a[j];
			if(min + max == M) {
				min1 = min;
				max1 = max;
				num++;
			}
		}
	}
	if(num > 0) printf("%d %d", min1, max1);
	else printf("No Solution");
	return 0;
}
