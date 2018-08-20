#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}
const int maxn = 1000;
int main() {
	// 所有的数在开始都未被覆盖 
	bool hashTable[maxn] = {false};
	int N, x, num = 0;
	int a[100], b[100];
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
		x = a[i];
		while( x != 1) {
			if(x % 2 == 0) x = x / 2;
			else x = (3 * x + 1) / 2;
			hashTable[x] = true;		
		}
	}
	sort(a, a+N, cmp);
	for(int i = 0; i < N; i++) {
		if(hashTable[a[i]] == false) b[num++] = a[i];
	} 
	for(int i = 0; i < num; i++) {
		printf("%d", b[i]);
		if(i != num - 1) printf(" "); 
	}
	return 0;
}

