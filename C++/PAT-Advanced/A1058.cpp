#include<stdio.h>

int main() {
	long long g, s, k,g1, s1, k1, temp;
	scanf("%lld.%lld.%lld %lld.%lld.%lld", &g, &s, &k, &g1, &s1, &k1);	
	temp = g*17*29 + s*29 + k + g1*17*29 + s1*29 + k1;
	printf("%lld.%lld.%lld", temp / (17*29), temp / 29 % 17, temp % 29); 
	return 0;
}
