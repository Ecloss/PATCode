#include<stdio.h>
#include<string.h>

void reverse(char a[]) {
	int len = strlen(a);
	char temp;
	for(int i = 0; i < len/2; i++) {
		temp = a[i];
		a[i] = a[len-1-i];
		a[len-1-i] = temp;
	}
}

char ans[5] = {'~', 'n', 'a', 'y', 'n'};
int main() {
	int N;
	scanf("%d\n", &N);
	char str[270];
	bool isFlag = true;
	for(int i = 0; i < N; i++) {
		int k = 0;
		// 此处不能用gets，因为gets会以回车会一行 应该用scanf来输入 
		gets(str);
//		scanf("%s", str); 
		int len = strlen(str);
		printf("%d\n", len);
		// 思路，将这个字符串反转一下
		reverse(str);
//		for(int m = 0; m < len / 2; m++) {
//			swap(str[m], str[len-1-m]);
//		} 
		
		for(int j = 0; j < 5; j++) {
			if(str[j] == ans[k]) k++;
			else break; 
		} 
		printf("%d\n", k);
		if(k == 5) {
			if(len == 5 || str[5] == ' ') isFlag = false;
		}
	}
	if(isFlag == true) printf("nai");
	else printf("nyan~");
	return 0;
}
