#include<stdio.h>
struct Stu{
	char name[15];
	char sex;
	char ID[15];
	int grade;
}temp, boy, girl;
void init() {
	boy.grade = 101;
	girl.grade = -1;
}
int main() {
	init();
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %c %s %d", temp.name, &temp.sex, temp.ID, &temp.grade);
		if(temp.sex == 'M' && boy.grade > temp.grade) boy = temp;
		else if(temp.sex == 'F' && girl.grade < temp.grade) girl = temp;
	}
	if(girl.grade == -1) printf("Absent\n");
	else printf("%s %s\n", girl.name, girl.ID);
	if(boy.grade == 101) printf("Absent\n");
	else printf("%s %s\n", boy.name, boy.ID);
	if(boy.grade == 101 || girl.grade == -1) printf("NA");
	else printf("%d", girl.grade-boy.grade);	
	return 0;
}
