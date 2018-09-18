#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

// name, id,  garde[0, 100]每个学生的等级都不同 
struct Student{
	char name[15];
	char id[15];
	int grade;
}stu[110];

bool cmp(Student a, Student b) {
	return a.grade > b.grade;
}

int main() {
	// min：最小范围， max：最大范围 
	int min, max;
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %s %d", stu[i].name, stu[i].id, &stu[i].grade);
	}
	sort(stu, stu+n, cmp);
	scanf("%d %d", &min, &max);
	for(int i = 0; i < n; i++) {
		if(stu[i].grade >= min && stu[i].grade <= max) {
			printf("%s %s\n", stu[i].name, stu[i].id);
			count++;
		}
	}
	if(count == 0) printf("NONE");
	return 0;
}
