#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

const int maxn = 10010;
int main() {
	char str1[maxn], str2[maxn], c1, c2;
	cin.getline(str1, maxn);
	cin.getline(str2, maxn);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	bool isFlag = true;
	for(int i = 0; i < len1; i++) {
		isFlag = true;
		c1 = str1[i];
		for(int j = 0; j < len2; j++) {
			c2 = str2[j];
			if(c1 == c2) {
				isFlag = false;
				break;
			}
		}
		if(isFlag == true) {
			printf("%c", c1);
		}
	}
	return 0;
}
