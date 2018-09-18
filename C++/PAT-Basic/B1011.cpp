#include<stdio.h>

int main() {
	int line;
	long long a, b, c;
	scanf("%d", &line);
	for(int i = 1; i <= line; i++) {
		scanf("%lld %lld %lld", &a, &b, &c);
		if((a + b) > c) {
			printf("Case #%d: true\n", i);
		} else {
			printf("Case #%d: false\n", i);
		}
	}
	return 0;
}
