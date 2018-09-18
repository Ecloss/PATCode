// ��һ����������д�ã���棬���ۼۣ�����
// �ڶ��������յ��۽��дӴ�С����
// ��������ѭ����Ȼ������ж�
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 1010;
struct Cake{
	double stock;	// ���
	double total;	// ���ۼ�
	double price;	// ���� 
}cake[maxn]; 

bool cmp(Cake a, Cake b) {
	return a.price > b.price;
}

int main() {
	// N--�±����࣬ D����������
	int N;
	double D;
	// ��ؼ���һ��������N�� ��D
	scanf("%d %lf", &N, &D); 
	// ��һ�������±������ѭ���洢��cake��stock
	for(int i = 0; i < N; i++) {
		scanf("%lf", &cake[i].stock);
	}
	// �ڶ���������ÿ���±������ۼ�
	for(int i = 0; i < N; i++) {
		scanf("%lf", &cake[i].total);
		cake[i].price = cake[i].total / cake[i].stock;
	}
	// �����������յ�������
	sort(cake, cake+N, cmp);
	// ���Ĳ�������������
	double money = 0;
	for(int i = 0; i < N; i++) {
		if(D >= cake[i].stock) {
			money += cake[i].total;
			D -= cake[i].stock;
		} else {
			money += cake[i].price*D;
			break;
		}
	}
	printf("%.2f", money);
	return 0;
}
