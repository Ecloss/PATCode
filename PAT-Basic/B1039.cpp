#include<cstdio>
#include<cstring>

const int maxn = 1010;
int main() {
	int in[128] = {0}, out[128] = {0}, a = 0, b = 0;
	bool isFlag = true;
	char str1[maxn], str2[maxn], c1, c2;
	scanf("%s", str1);
	scanf("%s", str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for(int i = 0; i < len2; i++) {
		c2 = str2[i];
		out[c2]++;
	}
	for(int i = 0; i < len1; i++) {
		c1 = str1[i];
		in[c1]++;
	}
	for(int i = 0; i < 128; i++) {
		if(in[i] < out[i]) {
			isFlag = false;
			b = b + out[i] - in[i];
		} else if(in[i] >= out[i]) {
			a = a + in[i] - out[i];
		}
	}
	if(isFlag) printf("Yes %d", a);
	else printf("No %d", b);
	return 0;
}
