#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
// �˴��Ƕ��帻�˵����� 
struct Rich{
	char name[15];
	int age;
	int mon;
} rich[120];

bool cmp(Rich a, Rich b) {
	if(a.mon != b.mon) return a.mon > b.mon;
	else if(a.age != b.age) return a.age > b.age;
	else return strcmp(a.name, b.name) > 0;
}

int a[110][3];
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	// ����n�и��˵ľ�ֵ 
	for(int i = 0; i < n; i++) {
		scanf("%s %d %d", rich[i].name, rich[i].age, rich[i].mon);
	}
	// ����m������ 0:��ѯ����, 1:min_age, 2:max_age 
	for(int i = 0; i < m; i++) {
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}
	// ��ɸѡ֮ǰ���Ƚ������������ɸѡֱ����� 
	sort(rich, rich+n, cmp);
	// ˫��ѭ������ʼɸѡ 
	for(int i = 0; i < m; i++) {
		printf("Case #%d:\n", i+1);
		int k = 0; 
		for(int j = 0; j < n; j++) {
			if(k < a[i][0]) {
				if(rich[j].age >= a[i][1] && rich[j].age <= a[i][2]) {
					printf("%s %d %d\n", rich[j].name, rich[j].age, rich[j].mon);
					k++;
				}
			}
		}
		if(k == 0) printf("None\n");
	}
	return 0;
}
