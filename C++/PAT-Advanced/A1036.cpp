#include<stdio.h>

// 定义学生的构造体：姓名，性别， ID， 成绩 
struct Stu{
	char name[15];
	char sex;
	char ID[15];
	int grade;
}temp, boy, girl;

// 初始化boy 和 girl两个人的性别，和成绩，方便判断 
void init() {
	boy.sex = 'M';
	boy.grade = 101;
	girl.sex = 'F';
	girl.grade = -1;
}

// 进行比较，a > b true, a < b false 
bool maxThan(int a, int b) {
	return a > b;
}

int main() {
	init();
	// 用来判断是否有学生缺席 
	int b = 0, g = 0;
	// 输入学生的个数 
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %c %s %d", temp.name, &temp.sex, temp.ID, &temp.grade);
		if(temp.sex == boy.sex) {
			// 如果为true， 则boy.grade要变成更小的-->temp 
			if(maxThan(boy.grade, temp.grade)) {
				boy = temp;
				b = 1;
			}
		} else if(temp.sex == girl.sex) {
			// 如果为false，要换成比它大的temp 
			if(maxThan(girl.grade, temp.grade) == false) {
				girl = temp;
				g = 1;
			}
		}
	}
	if(b == 0 && g == 1) {
		printf("%s %s\n", girl.name, girl.ID);
		printf("Absent\n");
		printf("NA");
	} else if(b == 1 && g == 0) {
		printf("Absent\n");
		printf("%s %s\n", boy.name, boy.ID);
		printf("NA");
	} else if(b == 0 && g == 0) {
		printf("Absent\n");
		printf("Absent\n");
		printf("NA");
	} else if(b == 1 && g == 1) {
		printf("%s %s\n", girl.name, girl.ID);
		printf("%s %s\n", boy.name, boy.ID);
		printf("%d", girl.grade-boy.grade);	
	}
	return 0;
}
