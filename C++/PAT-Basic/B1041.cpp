#include<stdio.h>
struct Ploy{
	long long adm;
	int exam;
}ploy[1001], ploy1[1001];

int main() {
	int m, n;	// m代表考试的考生，n代表迟到的考生
	scanf("%d", &m);
	int exam, test;
	long long adm;
	// 已考试号为下标，准考证号，考试号为value 
	for(int i = 0; i < m; i++) {
		scanf("%lld%d%d", &adm, &test, &exam);
		ploy[test].adm = adm;
		ploy[test].exam = exam;
	} 
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &test);
		ploy1[i].adm = ploy[test].adm;
		ploy1[i].exam = ploy[test].exam;
	}
	for(int i = 0; i <= 1000; i++) {
		if(ploy1[i].adm != 0) printf("%lld %d\n", ploy1[i].adm, ploy1[i].exam);
	}
	
	return 0;
}
