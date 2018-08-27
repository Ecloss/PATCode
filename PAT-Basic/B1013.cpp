#include<cstdio>
#include<algorithm>

// ÅĞ¶ÏÊÇ·ñÊÇËØÊı
bool isPrime(int n) {
	if(n <= 1) return false;
	for(int i = 2; i*i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
} 

int main() {
	int n, m, count = 0, i = 2;
	bool isFlag;
	scanf("%d %d", &m, &n);
	while(true) {
		isFlag = isPrime(i);
		if(isFlag) {
			count++;
			if(count >= m && count <= n) {
				printf("%d", i);
				if((count-m+1) % 10 != 0 && count < n) printf(" ");
				else printf("\n");
			}
		}
		i++;
		if(count == n) break;
		
	}
	return 0;
}
