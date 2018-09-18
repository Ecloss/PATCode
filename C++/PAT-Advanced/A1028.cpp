#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Excel{
	char id[10];
	char name[10];
	int level;
} peo[100010];

bool cmp1(Excel a, Excel b) {
	return strcmp(a.id, b.id) < 0; 
}
bool cmp2(Excel a, Excel b) {
	int s = strcmp(a.name, b.name);
	if(s != 0) s < 0;
	else return strcmp(a.id, b.id) < 0; 
}
bool cmp3(Excel a, Excel b) {
	if(a.level != b.level) return a.level < b.level;
	else return strcmp(a.id, b.id) < 0; 
}

int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	for(int i = 0; i < n; i++) {
		scanf("%s %s %d", peo[i].id, peo[i].name, &peo[i].level);
	}
	if(c == 1) sort(peo, peo+n, cmp1);
	else if(c == 2) sort(peo, peo+n, cmp2);
	else if(c == 3) sort(peo, peo+n, cmp3);
	for(int i = 0; i < n; i++) {
		printf("%s %s %d\n", peo[i].id, peo[i].name, peo[i].level);
	}
	return 0;
}

