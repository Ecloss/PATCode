#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct Stu{
	int id;
	int grade[4];
}ans[2010], temp[2010] ;

bool cmp(Stu a,Stu b) {
	return a.grade > b.grade;
}

char ax[4] = {'A', 'C', 'M', 'E'};
int rank[1000000][4] = {0};
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++) {
		scanf("%s %d %d %d", ans[i].id, &ans[i].grade[1], &ans[i].grade[2], &ans[i].grade[3]);
		ans[i].grade[0] = (ans[i].grade[1] + ans[i].grade[2] + ans[i].grade[3]) / 3;	
	}
	for(int now = 0; now < 4; now++) {
		sort(ans, ans+N, cmp);
		rank[ans[0].id][now] = 1;
		for(int i = 1; i < N; i++) {
			if(ans[i].grade[now] == ans[i - 1].grade[now])
				rank[ans[i].id][now] = rank[ans[i - 1].id][now];
			else 
				rank[ans[i].id][now] = i + 1;
		}
	}
	int query;
	for(int i = 0; i < M; i++) {
		scanf("%d", &query);
		if(rank[query][0] == 0)
			printf("N/A\n");
		else {
			int k = 0;
			for(int j = 0; j < 4; j++) {
				if(rank[query][j] < rank[query][k])	k = j;
			}
			printf("%d %c\n", rank[query][k], ax[k]);
		}
	}
	
	return 0;
}

