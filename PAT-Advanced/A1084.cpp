#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

const int maxn = 1010;
int main() {
	char str1[maxn], c1, c2;
	int ans[128] = {0}, max = 0, j = 0;
	gets(str1);
	int len1 = strlen(str1);
	for(int i = 0; i < len1; i++) {
		c1 = str1[i];
		ans[c1]++;
	}
	for(int i = 97; i <= 122; i++) {
		ans[i] = ans[i] + ans[i-32];
		if(max < ans[i]) {
			j = i;
			max = ans[i];
		} else if(max == ans[i]) {
			if(j > i) {
				j = i;
				max = ans[i];
			} 
		}
	} 
	c2 = char(j);
	printf("%c %d", c2, max);
	return 0;
}