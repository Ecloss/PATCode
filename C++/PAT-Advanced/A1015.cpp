#include<cstdio>
#include<algorithm>

bool isPrime(int n) {
	if(n <= 1) return false;
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int d[111];
int main() {
	int n, radix;
	while(scanf("%d", &n) != EOF) {
		if(n < 0) break;
		scanf("%d", &radix);
		bool isFlag, isFlag1;
		isFlag = isPrime(n);
		if(isFlag == false) printf("No\n");
		else {
			int  i = 0, count = 0;
			while(n != 0) {
				d[i++] = n % radix;
				n = n / radix;
			}
			for(int j = 0; j < i; j++) {
				count = count*radix + d[j];
			}
			isFlag1 = isPrime(count);
			if(isFlag1) printf("Yes\n");
			else printf("No\n");
		}
	}
}
