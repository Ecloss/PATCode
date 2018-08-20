#include<stdio.h>
#include<math.h>

int main() {
	double a;
	int b;
	long long x;
	scanf("%lfE%d", &a, &b);
	for(int i = 0; i < ceil(b); i++) {
		if(b > 0) a *= 10;
		else a /= 10;
	}
	printf("%lf", a);
	return 0;
}
