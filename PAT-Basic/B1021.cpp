#include<stdio.h>
#include<string.h>

int main() {
	// ��Ϊ�ǲ�����1000λ�����֣����Բ�����long long �����壬ֻ�������� 
	char str[1010];
	gets(str);
	int len = strlen(str);
	int a[10] = {0};
	for(int i = 0; i < len; i++) {
		// �����õ���ACSII�룬0-9�����֣�'0'��ACSII�룬��Ϊ0-9������ 
		a[str[i] - '0']++;
	}
	for(int i = 0; i < 10; i++) {
		if(a[i] != 0) printf("%d:%d\n", i, a[i]);
	}
	return 0;
}
