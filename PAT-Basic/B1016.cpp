#include<stdio.h>

int main() {
	long long a, b;
	int pa, pb;
	int na = 0, nb = 0;
	scanf("%lld %d %lld %d", &a, &pa, &b, &pb);
	while(a > 0) {
		int num = a % 10;
		a /= 10;
		if(num == pa) {
			na = na * 10 + pa;
		} 
	}
	while(b > 0) {
		int num = b % 10;
		b /= 10;
		if(num == pb) {
			nb = nb * 10 + pb;
		} 
	}
	printf("%d", (na + nb));
	
	return 0;
}
