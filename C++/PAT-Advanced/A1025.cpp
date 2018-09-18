#include<cstdio>
#include<algorithm>

using namespace std;

// ����һ�������壬���������ţ�����������������δ֪���룬�������� 
struct Student{
	char id[15];
	int grade, finRank, locNum, lokRank;
}temp, stu[110];

bool cmp(Student a, Student b) {
	if(a.grade != b.grade) return a.grade > b.grade;
	else if(a.id != b.id) return a.id < b.id;
} 

int main() {
	int k, n, num = 0, count;
	scanf("%d", &k);
	for(int j = 0; j < k; j++) {
		scanf("%d", &n);
		num += n;
		for(int i = num-n; i < num; i++) {
			scanf("%s %d", stu[i].id, &stu[i].grade);
			stu[i].locNum = j+1; 
		}
		sort(stu+num-n, stu+num, cmp);
		// num���������������� 
		count = 2;
		stu[num-n].lokRank = 1;
		for(int i = num-n+1; i < num; i++, ++count) {
			if(stu[i].grade == stu[i-1].grade) stu[i].lokRank = stu[i-1].lokRank;
			else stu[i].lokRank = count;
		}
	}
	printf("----------\n");
	for(int i = 0; i < num; i++) {
		printf("%s %d %d\n", stu[i].id, stu[i].grade, stu[i].lokRank);
	}
	sort(stu, stu+num,cmp);
	// ���ڵ������ǣ�����������д�����ˣ����������ǽ�����������������
	count = 2;
	stu[0].finRank = 1;
	for(int i = 1; i < num; i++, ++count) {
		if(stu[i].grade == stu[i-1].grade) stu[i].finRank = stu[i-1].finRank;
		else stu[i].finRank = count;
	} 
	printf("----------\n");
	for(int i = 0; i < num; i++) {
		printf("%s %d %d %d %d\n", stu[i].id, stu[i].grade, stu[i].finRank, stu[i].locNum,stu[i].lokRank);
	}
	return 0;
}
 
