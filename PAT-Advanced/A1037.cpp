#include<cstdio>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}
const int maxn = 100010;
int main() {
	int NC, NP;
	int a[maxn], b[maxn], value = 0;
	scanf("%d", &NC);
	for(int i = 0; i < NC; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &NP);
	for(int i = 0; i < NP; i++) {
		scanf("%d", &b[i]);
	}
	sort(a, a + NC, cmp);
	sort(b, b + NP, cmp);
	for(int i = 0; i < NC && i < NP; i++) {
		if(a[i] > 0 && b[i] > 0) value = value + a[i] * b[i];
		if(a[i] <= 0 || b[i] <= 0) break;
	}
	for(int i = NC-1, j = NP-1; i >= 0 && j >= 0; i--, j--) {
		if(a[i] < 0 && b[i] < 0) value = value + a[i] * b[j];
		if(a[i] >= 0 || b[j] >= 0) break;
	}
	printf("%lld", value);
	return 0;
}
