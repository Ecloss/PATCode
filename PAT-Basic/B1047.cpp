#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 1010;
struct Student{
//	int score[11];
	int id;
	int total;
}stu[maxn];

bool cmp(Student a, Student b) {
	return a.total > b.total;
}

void init() {
	for(int i = 0; i < maxn; i++) {
		stu[i].total = 0;
		stu[i].id = i;
	}
}

int main() {
	init();
	int N, teamId, stuId, score;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%d-%d %d", &teamId, &stuId, &score);
		stu[teamId].total += score;
	}
	sort(stu, stu+maxn, cmp);
	printf("%d %d", stu[0].id, stu[0].total);
}
