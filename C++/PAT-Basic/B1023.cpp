#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	// a用来存储非0的数， num用来记录为0的数，x则代表输入 count代表非0的个数 
	int a[60] = {0}, num = 0, x, count = 0;
	// y用来记录最终结果的数 
	long long y = 0;
	// 存储非0数，以及记录为0的个数 
	for(int i = 0; i < 10; i++) {
		scanf("%d", &x);
		if(i = 0) num = x;
		else {
			for(int j = 0; j < x; j++) {
				a[count++] = i;
			}
		}
	}
	// 排序
	printf("%d %d\n", num, count);
	sort(a, a+count);
	// 输出最终的数字 
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
