#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	// a�����洢��0������ num������¼Ϊ0������x��������� count�����0�ĸ��� 
	int a[60] = {0}, num = 0, x, count = 0;
	// y������¼���ս������ 
	long long y = 0;
	// �洢��0�����Լ���¼Ϊ0�ĸ��� 
	for(int i = 0; i < 10; i++) {
		scanf("%d", &x);
		if(i = 0) num = x;
		else {
			for(int j = 0; j < x; j++) {
				a[count++] = i;
			}
		}
	}
	// ����
	printf("%d %d\n", num, count);
	sort(a, a+count);
	// ������յ����� 
	for(int i = 0; i < count; i++) {
		y = y * 10 + a[i];
		if(i == 0) {
			for(int j = 0; j < num; j++) {
				y = y * 10;
			}
		}
	}
	printf("%lld", y); 
	return 0;
}
