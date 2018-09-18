#include<stdio.h>

int main() {
	char b = 'B', s = 'S';
	int n, a[3];
	scanf("%d", &n);
	a[0] = n / 100;
	a[1] = n % 100 / 10;
	a[2] = n % 10;
	for(int i = 0; i < a[0]; i++) { printf("%c", b); }
	for(int i = 0; i < a[1]; i++) {	printf("%c", s); }
	for(int i = 1; i <= a[2]; i++) { printf("%d", i); }	
	return 0;
}
