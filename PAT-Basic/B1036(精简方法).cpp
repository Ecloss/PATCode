#include<stdio.h>
#include<math.h>

int main() {
	int N, num;
	char C;
	scanf("%d %c",&N, &C);
	num = ceil(N/(2.0));
	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= N; j++) {
			if(i == 1 || i == num) printf("%c", C);
			else if(j == 1 || j == N) printf("%c", C);
			else printf(" ");
		}
		printf("\n"); 
	}
	return 0; 
}
