#include<stdio.h>

// ����ѧ���Ĺ����壺�������Ա� ID�� �ɼ� 
struct Stu{
	char name[15];
	char sex;
	char ID[15];
	int grade;
}temp, boy, girl;

// ��ʼ��boy �� girl�����˵��Ա𣬺ͳɼ��������ж� 
void init() {
	boy.sex = 'M';
	boy.grade = 101;
	girl.sex = 'F';
	girl.grade = -1;
}

// ���бȽϣ�a > b true, a < b false 
bool maxThan(int a, int b) {
	return a > b;
}

int main() {
	init();
	// �����ж��Ƿ���ѧ��ȱϯ 
	int b = 0, g = 0;
	// ����ѧ���ĸ��� 
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %c %s %d", temp.name, &temp.sex, temp.ID, &temp.grade);
		if(temp.sex == boy.sex) {
			// ���Ϊtrue�� ��boy.gradeҪ��ɸ�С��-->temp 
			if(maxThan(boy.grade, temp.grade)) {
				boy = temp;
				b = 1;
			}
		} else if(temp.sex == girl.sex) {
			// ���Ϊfalse��Ҫ���ɱ������temp 
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
