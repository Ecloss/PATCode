#include<cstdio>
 
const int maxn = 54;
char str[5] = {'S', 'H', 'C', 'D', 'J'};
int start[maxn+1], end[maxn+1], next[maxn+1];
int main() {
	int N;
	for(int i = 1; i <= maxn; i++) {
		start[i] = i;
	}
	scanf("%d", &N);
	for(int i = 1; i <= maxn; i++) {
		scanf("%d", &next[i]);
	}
	for(int i = 0; i < N; i++) {
		for(int j = 1; j <= maxn; j++) {
			end[next[j]] = start[j];
		}
		for(int k = 1; k <= maxn; k++) {
			start[k] = end[k];
		}
	}
	int x, y;
	for(int i = 1; i <= maxn; i++) {
		if(i != 1) printf(" ");
		start[i]--;
		x = start[i]/13;
		y = start[i]%13+1;
		printf("%c%d", str[x], y);
	}
	
	return 0;
}
