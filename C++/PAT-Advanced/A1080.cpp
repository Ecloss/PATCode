#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int maxn = 40010;
struct Student{
	int id; // 编号 
	int ge; // 入学成绩
	int gi; // 面试成绩
	int ag; // 最终成绩
	int unv[6]; // 理想学校  
}stu[maxn];

int n, m, k;
int un[110];
void init() {
	for(int i = 0; i < n; i++) {
		stu[i].id = i;
		stu[i].ge = 0;
		stu[i].gi = 0;
	}
}
// 进行排序，最终成绩从大到小， 最终成绩相同， 入学成绩从大到小 
bool cmp(Student a, Student b) {
	if(a.ag != b.ag) return a.ag > b.ag;
	else return a.ge > b.ge;
}

int main() {
	// m--大学数量， k--代表支援学校数量 
	scanf("%d %d %d", &n, &m, &k);
	// 输入每个学院的名额 
	for(int i = 0; i < m; i++) {
		scanf("%d", un[i]);
	}
	// 输入每个学生的入学成绩，面试成绩， 以及志愿学校 
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &stu[i].ge, &stu[i].gi);
		for(int j = 0; j < k; j++) {
			scanf("%d", &stu[i].unv[k]);
		}
	}
	// 将每个学生的最终成绩求出来
	for(int i = 0; i < n; i++) {
		stu[i].ag = (stu[i].ge + stu[i].gi) / 2;
	} 
	// 进行排序 
	sort(stu, stu+n, cmp);
	return 0;
}
