#include<stdio.h>
#include<string.h>
// ˼·��length = (n +2) / 3 ����U���͵ĸ�  
// ��ȣ�weight = n - 2*length + 2
// ����һ�����飬������ķ��������� 
// l��������ѭ�����Σ�w��������ѭ������ 

int main() {
	char str[85];
	gets(str);
	int N = strlen(str);
	int n1 = (N+2)/3, n3 = n1, n2 = N + 2 - 2*n1;
	for(int i = 0; i < n1-1; i++) {
		printf("%c", str[i]);
		for(int j = 0; j < n2-2; j++) printf(" ");
		printf("%c\n", str[N-1-i]);
	}
	for(int i = 0; i < n2; i++) {
		printf("%c", str[n1-2+i]);
	} 
	return 0;
} 

