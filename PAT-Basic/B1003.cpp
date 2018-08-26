#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main() {
	// 几个判断条件，1.是否存在PT， 存在PT时，左边，中间，右边均有几个A
	int n, a[12];
	char str1[110];
	cin >> n;
	for(int i = 0; i < n; i++) {
		scanf("%s", str1);
		int len1 = strlen(str1);
		// 现在的思路是怎么判断是否有PT
		// 左 中 右 各有几个A
		// p的个数， t的个数， PAT之外的个数 
		int num_p = 0, num_t = 0, num_other = 0;
		int loc_p = -1, loc_t = -1;
		for(int i = 0; i <len1; i++) {
			if(str1[i] == 'P') {
				num_p++;
				loc_p = i;
			} else if(str1[i] == 'T') {
				num_t++;
				loc_t = i;
			} else if(str1[i] != 'A') {
				num_other++;
			}
		}
		// 如果P，T的数量不为1， PAT之外存在其他字母，PT之中没有字符 则输出NO 
		if(num_p != 1 || num_t != 1 || num_other > 0 || loc_t - loc_p <= 1) {
			printf("NO\n");
			continue;
		} 
		// 就是判断左 中 右 的个数 
		int left = 0, center = 0, right = 0;
		left = loc_p;
		center = loc_t - loc_p - 1;
		right = len1 - loc_t - 1;
		if(right == left * center) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	} 
	 
	return 0;
}
