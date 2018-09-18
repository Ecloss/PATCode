#include<cstdio>
struct Student {
    char name[15];
    char ID[15];
    int score;
}temp, ans_max, ans_min;

int main() {
	int m;
	ans_max.score = -1;
	ans_min.score = 101;
	scanf("%d", &m);
	// 存储学生信息 
	for(int i = 0; i < m; i++) {
		scanf("%s %s %d", temp.name, temp.ID, &temp.score);
		if(ans_max.score < temp.score) ans_max = temp;
		if(ans_min.score > temp.score) ans_min = temp;
	} 
	printf("%s %s\n", ans_max.name, ans_max.ID);
	printf("%s %s\n", ans_min.name, ans_min.ID);
	return 0;
}
