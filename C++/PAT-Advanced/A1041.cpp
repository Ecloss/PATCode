#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 10010;
struct Unique{
	int id;
	int num;
	int x;
}peo[maxn];

void init() {
	for(int i = 0; i < maxn; i++) {
		peo[i].id = maxn;
		peo[i].num = 0;
		peo[i].x = 0;
	}
} 

bool cmp(Unique a, Unique b) {
	return a.id < b.id;
}

int main() {
	int N, x;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++) {
		scanf("%d", &x);
		peo[x].id = i;
		peo[x].num++;
		peo[x].x = x;
	}
	sort(peo, peo+maxn, cmp);
	bool isFlag = false;
	for(int i = 0; i < maxn; i++) {
		if(peo[i].num == 1) {
			printf("%d", peo[i].x);
			isFlag =true;
			break;
		}
	}
	if(isFlag == false) printf("None");	
	return 0;
}
