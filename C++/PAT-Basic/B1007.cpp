#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 100010;
int prime[maxn], pNum = 0;
bool p[maxn] = {0};
void Find_Prime(int n) {
	if(n == 1) p[1] = true;
	for(int i = 2; i <= n; i++) {
		if(p[i] == false) {
			prime[pNum++] = i;
			for(int j = i + i; j < n; j +=i) {
				p[j] = true;
			}
		}
	}
}

int main() {
	int n, count = 0; 
	scanf("%d", &n);
	Find_Prime(n);
//	for(int i = 0; i < pNum; i++) {
//		printf("%d ", prime[i]);
//	}
	for(int i = 0; i < pNum - 1; i++) {
		if(prime[i+1] - prime[i] == 2) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}  
