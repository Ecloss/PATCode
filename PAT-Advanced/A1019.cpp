#include<stdio.h>

int main() {
	// isFlag �����ж��Ƿ��ǻ�������,  
	int isFlag = 1, N, b;
	// a[32] �����洢�������ֵ�����, len�����洢�������ĳ��� 
	int a[32] = {0}, len = 0;
	scanf("%d %d", &N, &b);
	// �˴������len�ĳ��ȣ��ͻ�������N 
	while(N != 0) {
		a[len] = N % b;
		N = N / b;
		len++;
	} 
//	printf("%d %d %d\n", len, N, b);
	// ����������������ô����������ж�
	for(int i = 0; i < len/2; i++) {
		if(a[i] != a[len-i-1]) isFlag = 0;
	} 
	if(isFlag == 1) printf("Yes\n");
	else printf("No\n");
	for(int i = len-1; i >= 0; i--) {
		if(i != 0) printf("%d ", a[i]);
		else printf("%d", a[i]);
	}
	return 0;
}
