#include<stdio.h>

int main() {
	// l代表行数， i代表要增加的列 
	int i = 1, l = 0;
	// top为上半部分的行数，down为下面的行数 
	int N, top, down;
	char C;
	scanf("%d %c",&N, &C);
	while(true) {
		if(i == 1 && (N-i) >= 0) {
			N -= i; 
			l++;
		} else if(i > 1 && (N - 4*i + 2) >= 0) {
			N = N - 4*i + 2;
			l += 2;
		} else break;
		i++; 
	}
	top = (l + 1) / 2;
	down = (l - 1) / 2;
	for(int i = top; i >= 1; i--) {
		for(int j = 0; j < top-i; j++) {
			printf(" ");
		}
		for(int k = 1; k <= 2*i-1; k++) {
			printf("%c", C);
		}
		printf("\n");
	}
	for(int i = 1; i <= down; i++) {
		for(int j = 1; j <= down-i; j++) {
			printf(" ");
		}
		for(int k = 1; k <= 2*i+1; k++) {
			printf("%c", C);
		}
		printf("\n");
	}
	printf("%d", N); 
	return 0;
} 
