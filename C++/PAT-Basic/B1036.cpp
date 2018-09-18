#include<stdio.h>
#include<math.h>

int main() {
	int N, num;
	char C;
	scanf("%d %c",&N, &C);
	// N行代表要输入的次数
	num = ceil(N/(2.0));
	// 行循环 
	for(int i = 1; i <= num; i++) {
		// 列循环
		if(i == 1 || i == num) {
			for(int j = 1; j <= N; j++) {
				printf("%c", C);
			}
			printf("\n");
		} else {
			for(int k = 1; k <= N; k++) {
				if(k == 1 || k == N) printf("%c", C);
				else printf(" ");
			}
			printf("\n");
		} 
	}
	return 0; 
}
