#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 10010;
// solve��������� 
struct Score{
	int id;
	int prefect;
	int score[6];
	int total;
	int solve;
}stu[maxn];

// ����д��������
bool cmp(Score a, Score b) {
	if(a.total != b.total) return a.total > b.total;
	else if(a.prefect != b.prefect) return a.prefect > b.prefect;
	else if(a.id != b.id) return a.id < b.id;
} 

// ��������г�ʼ���������������Ϊ0��ÿ�������ʼ��Ϊ-1���ܷ�������Ϊ0��solve--������������Ϊ0 
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
	// n--�û�����10^4  k--��������0-5  m--�ύ����10^5 
	int n, k, m;
	int score, que;
	int p[5] = {0};
	scanf("%d %d %d", &n, &k, &m);
	// ����k������ķ��� 
	for(int i = 0; i < k; i++) {
		scanf("%d", &p[k]);
	}
	// ����ÿ���ύ��������,�����ж��Ƿ�����߷ֵ����ݣ����洢�ύͨ������������� 
	int x;
	for(int i = 0; i < m; i++) {
		x = 0;
		// id��Ϊ������±꼴�� 
		scanf("%d %d %d", &stu[i].id, &que, &score);
		if(stu[i].k[que] < score){
			if(score > 0 && stu[i].k[que] == -1) stu[i].solve++;
			// �����������Ľ���ˣ����������������Լ����������������� 
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
