#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 100010;
struct Stu{
	char ID[12];
	int de, cai;
	int count;
	int flag;
}stu[maxn];

bool cmp(Stu a, Stu b) {
	if(a.flag != b.flag) return a.flag < b.flag;
	else if(a.count != b.count) return a.count > b.count; 
	else if(a.de != b.de) return a.de > b.de;
	else return strcmp(a.ID, b.ID) < 0;
}

int main() {
	int N, L, H, m; 
	scanf("%d %d %d", &N, &L, &H);
	m = N;
	for(int i = 0; i < N; i++) {
		scanf("%s %d %d", stu[i].ID, &stu[i].de, &stu[i].cai);
		stu[i].count = stu[i].de + stu[i].cai;
		if(stu[i].de < L || stu[i].cai < L) {
            stu[i].flag = 5;
            m--;
        }
        else if(stu[i].de >= H && stu[i].cai >= H) stu[i].flag = 1;
        else if(stu[i].de >= H && stu[i].cai < H) stu[i].flag = 2;
        else if(stu[i].de >= stu[i].cai) stu[i].flag = 3;
        else stu[i].flag = 4;
	}
    sort(stu, stu + N, cmp);
    printf("%d\n", m);
    for(int i = 0; i < m; i++) {
        printf("%s %d %d\n", stu[i].ID, stu[i].de, stu[i].cai);
    }
	return 0;
}
