#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Student{
	char id[15];
	int grade, locNum, lokRank;
}stu[30010];

bool cmp(Student a, Student b) {
	if(a.grade != b.grade) return a.grade > b.grade;
	else  return strcmp(a.id, b.id) < 0;
} 

int main() {
	int k, n, num = 0;
	scanf("%d", &k);
	for(int j = 1; j <= k; j++) {
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			scanf("%s %d", stu[num].id, &stu[num].grade);
			stu[num].locNum = j; 
			num++;
		}
		sort(stu+num-n, stu+num, cmp);
		stu[num-n].lokRank = 1;
		for(int i = num-n+1; i < num; i++) {
			if(stu[i].grade == stu[i-1].grade) stu[i].lokRank = stu[i-1].lokRank;
			else stu[i].lokRank = i + 1 - (num - n);
		}
	}
	sort(stu, stu+num,cmp);
	printf("%d\n", num);
	int r = 1;
	for(int i = 0; i < num; i++) {
		if(i > 0 && stu[i].grade != stu[i-1].grade) r = i + 1;
		printf("%s ", stu[i].id);	
		printf("%d %d %d\n", r, stu[i].locNum, stu[i].lokRank);
	}
	return 0;
}
 
