#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

// 构造体， name代表姓名， mm--月份， dd--日期， hh--小时， min--分钟 
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
