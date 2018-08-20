#include<stdio.h>

int sch[100001] = {0};
int main() {
	int n;
	scanf("%d", &n);
	int id, score;
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &id, &score);
		sch[id] += score;
	}
	int max_id;
	int max_score = -1;
	for(int i = 0; i <= 100000; i++) {
		if(sch[i] > max_score)	{
			max_score = sch[i];
			max_id = i;
		}
	}
	printf("%d %d\n", max_id, max_score);
	return 0;
}

