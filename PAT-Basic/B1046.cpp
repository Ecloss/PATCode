#include<stdio.h>

int main() {
	int a, ah, b, bh;
	int at = 0, bt = 0;
	int line;
	int aj = 0, bj = 0;
	scanf("%d", &line);
	while(line--) {
		scanf("%d %d %d %d", &a, &ah, &b, &bh);
		at = 0, bt = 0;
		if(a + b == ah) {
			at = 1;
		}
		if(a + b == bh) {
			bt = 1;
		}
		if(at == 1 && bt == 0) {
			bj += 1;
		}
		if(at == 0 && bt == 1) {
			aj += 1;
		}
	}
	printf("%d %d", aj,bj);
	return 0;
}
