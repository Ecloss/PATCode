#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
// 思路：用构造体来做
const int N = 40010;
const int M = 26*26*26*10 + 1;
vector<int> selectCourse[M];

int getID(char name[]) {
	int n = 0;
	for(int i = 0; i < 3; i++) {
		n = n*26 + name[i] - 'A';
	}
	n = n*10 + (name[3] - '0');
	return n;
}


int main() {
	// N代表学生数量， K代表课程 , c代表课程， count 代表学习的人数 
	int N, K;
	int c, count;
	char name[5];
	scanf("%d %d", &N, &K);
	for(int i = 0; i < K; i++) {
		scanf("%d %d", &c, &count);
		for(int j = 0; j < count; j++) {
			scanf("%s", name);
			int ID= getID(name);
			selectCourse[ID].push_back(c);
		}
	}
	for(int i = 0; i < N; i++) {
		scanf("%s", name);
		int ID = getID(name);
		sort(selectCourse[ID].begin(), selectCourse[ID].end());
		printf("%s %d", name, selectCourse[ID].size());
		for(int j = 0; j < selectCourse[ID].size(); j++) {
			printf(" %d", selectCourse[ID][j]);
		}
		printf("\n");
	}
	return 0;
}
