#include<stdio.h>
struct Ploy{
	long long adm;
	int exam;
}ploy[1001], ploy1[1001];

int main() {
	int m, n;	// m�����ԵĿ�����n����ٵ��Ŀ���
	scanf("%d", &m);
	int exam, test;
	long long adm;
	// �ѿ��Ժ�Ϊ�±꣬׼��֤�ţ����Ժ�Ϊvalue 
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
