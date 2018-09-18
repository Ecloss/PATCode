#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;
bool cmp(int a, int b) {
	return a < b;
}

const int maxn = 100010;
int main() {
	ll N, p, a[maxn];
	ll count = 0;
	scanf("%lld %lld", &N, &p);
	for(int i = 0; i < N; i++) {
		scanf("%lld", &a[i]);
	}
	sort(a, a+N, cmp);
	int len, maxlen = 0;
	for(int i = 0; i < N; i++) {
		len = 0;
		for(int j = i; j < N; j++) {
//			a[j] >= a[i] && 
//			count = a[i] * p;
			if(a[j] > a[i] * p) break;
			len++;
		}
		if(len > maxlen) maxlen = len;
	}
	printf("%d", maxlen);
	
	return 0;
}
