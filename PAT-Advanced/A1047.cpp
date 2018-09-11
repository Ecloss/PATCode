#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
const int N = 40010;
const int M = 2510;

char name[N][5];
vector<int> course[M];

bool cmp(int a, int b) {
	return strcmp(name[a], name[b]) < 0;
}

int main() {
	int n, k, count, x;	// n是学生人数， k是课程数量 
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) {
		scanf("%s %d", name[i], &count);
		for(int j = 0; j < count; j++){
			scanf("%d", &x);
			course[x].push_back(i);
		} 
	}
	for(int i = 1; i <= k; i++) {
		printf("%d %d\n", i, course[i].size());
		sort(course[i].begin(), course[i].end(), cmp);
		for(int j = 0; j < course[i].size(); j++) {
			printf("%s\n", name[course[i][j]]);
		}
	}
	return 0;
}
