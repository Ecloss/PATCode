#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

// �����壬 name���������� mm--�·ݣ� dd--���ڣ� hh--Сʱ�� min--���� 
struct Phone{
	char name[25];
	int mm, dd, hh, min;
	char status[15];
}peo[1010];

int hour[24];
char status[2][15] = {"off-line", "on-line"}; 
int main() {
	for(int i = 0; i < 24; i++) {
		scanf("%d", &hour[i]);
	}
	int N;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%s %d:%d:%d:%d %s", peo.name, &peo.mm, &peo.dd, &peo.hh, &peo.min)
	}
	return 0;
} 
