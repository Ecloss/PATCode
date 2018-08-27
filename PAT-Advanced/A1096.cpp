#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;

int main() {
	// Ҫ�������������ĳ�ʼ����lenI, ����len �Լ����������N 
	ll n, lenI = 0, len = 0;
	scanf("%lld", &n);
	ll q = (ll)sqrt(1.0 * n);
	for(ll i = 2; i <= q; i++) {
		int temp = 1, j = i;
		while(1) {
			temp *= j;
			if(n % temp != 0) break;
			if(j-i+1 > len) {
				lenI = i;
				len = j - i + 1;
			}
			j++; 
		}
	}
	if(len == 0) {
		printf("1\n%lld", n);
	} else {
		printf("%lld\n", len);
		for(int i = 0; i < len; i++) {
			printf("%lld", lenI+i);
			if(i < (len-1)) printf("*");
		}
	}
	return 0;
}
