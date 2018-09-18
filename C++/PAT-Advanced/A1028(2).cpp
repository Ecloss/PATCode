#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Excel{
	int id;
	char name[10];
	int level;
} peo[100010];

bool cmp1(Excel a, Excel b) {
	return a.id < b.id; 
}
bool cmp2(Excel a, Excel b) {
	int s = strcmp(a.name, b.name);
	if(s != 0) return s < 0;
	else return a.id < b.id; 
}
bool cmp3(Excel a, Excel b) {
	if(a.level != b.level) return a.level < b.level;
	else return a.id < b.id; 
}

int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	for(int i = 0; i < n; i++) {
		scanf("%d %s %d", &peo[i].id, peo[i].name, &peo[i].level);
	}
	if(c == 1) sort(peo, peo+n, cmp1);
	else if(c == 2) sort(peo, peo+n, cmp2);
	else if(c == 3) sort(peo, peo+n, cmp3);
	for(int i = 0; i < n; i++) {
		printf("%06d %s %d\n", peo[i].id, peo[i].name, peo[i].level);
	}
	return 0;
}

