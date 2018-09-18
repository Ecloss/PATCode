#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 10010;
// solve解决的问题 
struct Score{
	int id;
	int prefect;
	int score[6];
	int total;
	int solve;
}stu[maxn];

// 次数写排序条件
bool cmp(Score a, Score b) {
	if(a.total != b.total) return a.total > b.total;
	else if(a.prefect != b.prefect) return a.prefect > b.prefect;
	else if(a.id != b.id) return a.id < b.id;
} 

// 对问题进行初始化：完美解决问题为0，每个问题初始化为-1，总分数设置为0，solve--解决问题的数量为0 
void init() {
	for(int i = 0; i < maxn; i++) {
		stu[i].prefect = 0;
		for(int j = 0; j < 5; j++) {
			stu[i].k[j] = -1;
		}
		stu[i].total = 0;
		stu[i].solve = 0;
	}
} 

int main() {
	init(); 
	// n--用户总数10^4  k--问题总数0-5  m--提交总数10^5 
	int n, k, m;
	int score, que;
	int p[5] = {0};
	scanf("%d %d %d", &n, &k, &m);
	// 输入k个问题的分数 
	for(int i = 0; i < k; i++) {
		scanf("%d", &p[k]);
	}
	// 输入每个提交量的数据,并且判断是否是最高分的数据，并存储提交通过的问题的数量 
	int x;
	for(int i = 0; i < m; i++) {
		x = 0;
		// id变为数组的下标即可 
		scanf("%d %d %d", &stu[i].id, &que, &score);
		if(stu[i].k[que] < score){
			if(score > 0 && stu[i].k[que] == -1) stu[i].solve++;
			// 这样就完美的解决了，解决问题的数量，以及完美解决问题的数量 
			if(score == p[que] && stu[i].k[i] < p[que]) stu[i].prefect++;
			stu[i].k[que] = score;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < k; j++) {
			if(stu[i].k[j] != -1) stu[i].total += stu[i].k[j];
		}
	}
	sort(stu, stu+n, cmp);
	stu[0].rank = 1;
	for(int i = 1; i < n; i++) {
		if(stu[i].total == stu[i-1].total) stu[i].rank = stu[i-1].rank;
		else stu[i].rank = stu[i].rank+1;
	}
	for(int i = 0; i < n; i++) {
		if(stu[i].solve > 0) {
			printf("%d %05d %d", stu[i].rank, stu[i].id, stu[i].total);
			for(int j = 0; j < k; j++) {
				if(stu[i].k[j] == -1) printf(" -");
				else printf(" %d", stu[i].k[j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
