#include<stdio.h>
#include<string.h>

int main() {
	// 因为是不超过1000位的数字，所以不能用long long 来定义，只能用数组 
	char str[1010];
	gets(str);
	int len = strlen(str);
	int a[10] = {0};
	for(int i = 0; i < len; i++) {
		// 这里用到了ACSII码，0-9的数字－'0'的ACSII码，就为0-9的数字 
		a[str[i] - '0']++;
	}
	for(int i = 0; i < 10; i++) {
		if(a[i] != 0) printf("%d:%d\n", i, a[i]);
	}
	return 0;
}
