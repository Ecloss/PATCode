#include<stdio.h>

struct Poly{
	int exp; 
	double cof;  
}ploy[1001];

double con[2001];
int main() {
	int n,m;	//������¼��������ʽ������
	int num = 0;	//������¼�����Ϊ0����
	scanf("%d", &m);
	for(int i = 0; i < m; i++) {
		scanf("%d%lf", &ploy[i].exp, &ploy[i].cof);	 
	} 
	scanf("%d", &n);
	for(int j = 0; j < n; j++) {
		int exp;
		double cof;
		scanf("%d%lf", &exp, &cof);
		for(int k = 0; k < m; k++) {
			con[ploy[k].exp + exp] += (cof * ploy[k].cof);
		}
	}
	// ��ѯcon�в�Ϊ0����
	for(int i = 0; i < 2001; i++) {
		if(con[i] != 0.0) num++;
	} 
	printf("%d", num);
	for(int i = 2000; i >= 0; i--) {
		if(con[i] != 0.0) printf(" %d %.1f", i, con[i]);
	}
	return 0;
} 
