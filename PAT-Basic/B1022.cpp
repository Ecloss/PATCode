#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn = 100;

int main() {
	ll a, b, c;
	int d, num[maxn], i = 0, x;
	scanf("%lld %lld %d", &a, &b, &d);
	c = a + b;
	do {
		x = c % d;
		num[i++] = x;
		c = c / d;
	} while(c != 0);
	for(int j = i-1; j >= 0; j--) {
		printf("%d", num[j]);
	}
	return 0;
}