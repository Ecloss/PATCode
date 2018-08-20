#include<stdio.h>

int main() {
	int g, s, k, A, B, temp;
	scanf("%d.%d.%d", &g, &s, &k);	
	A = g*17*29 + s*29 + k;
	scanf("%d.%d.%d", &g, &s, &k);
	B = g*17*29 + s*29 + k;
	temp = A + B;
	printf("%d.%d.%d", temp/(17*29), temp/29%17, temp%29); 
	return 0;
}
