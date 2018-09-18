#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

// 思路：输出A和B的石头剪刀布的次数
// 输出：Awin 平局 Bwin
// 		 赢得最多的手势
const int maxn = 100010; 

int whoWin(char a, char b) {
	if((a == 'C') && (b == 'C')) {
		return 0;
	} else if((a == 'C') && (b == 'J')) {
		return 1;
	} else if((a == 'C') && (b == 'B')) {
		return -1;
	} else if((a == 'J') && (b == 'C')) {
		return -1;
	} else if((a == 'J') && (b == 'J')) {
		return 0;
	} else if((a == 'J') && (b == 'B')) {
		return 1;
	} else if((a == 'B') && (b == 'C')) {
		return 1;
	} else if((a == 'B') && (b == 'J')) {
		return -1;
	} else if((a == 'B') && (b == 'B')) {
		return 0;
	}
}

int findHand(char a) {
	if(a == 'C') return 1;
	else if(a == 'J') return 2;
	else if(a == 'B') return 0;
}

char hand[3] = {'B', 'C', 'J'};
int main() {
	int n, winA[3] = {0}, handA[3] = {0}, handB[3] = {0}, maxA = -1, maxB = -1;
	int cA, cB; 
	char a, b;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		getchar();
		scanf("%c %c", &a, &b);
		int x = whoWin(a, b);
		int y = findHand(a);
		int z = findHand(b);
		if(x == 0) {
			winA[1]++;
		} else if(x == 1) {
			winA[0]++;
			handA[y]++;
		} else if(x == -1) {
			winA[2]++;
			handB[z]++;
		}
	}
	for(int i = 0; i < 3; i++) {
		if(maxA < handA[i]) {
			maxA = handA[i];
			cA = i;
		}
		if(maxB < handB[i]) {
			maxB = handB[i];
			cB = i;
		}
	}
	printf("%d %d %d\n", winA[0], winA[1], winA[2]);
	printf("%d %d %d\n", winA[2], winA[1], winA[0]);
	printf("%c %c\n", hand[cA], hand[cB]);
	return 0;
}
