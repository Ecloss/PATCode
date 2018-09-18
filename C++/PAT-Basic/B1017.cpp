#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

// 1. 构造体
struct bign{
	int d[1000];
	int len;
	bign() {
		len = 0;
		memset(d, 0, sizeof(d));
	}
}; 

// 2. 转换
bign change(char a[]) {
	bign c;
	c.len = strlen(a);
	for(int i = 0; i < c.len; i++) {
		c.d[i] = a[c.len - 1 - i] - '0';
	}
	return c; 
}

// 3. 输出
void print(bign a) {
	for(int i = a.len-1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
}

// 4. 高精度与低精度的除法
bign div(bign a, int b, int& r) {
	bign c;
	c.len = a.len;
	for(int i = a.len-1; i >= 0; i--) {
		r = r*10 + a.d[i];
		c.d[i] = r / b;
		r = r % b;
	}
	while(c.len-1 >= 1 && c.d[c.len-1] == 0) {
		c.len--;
	}
	return c;
}

int main() {
	char A[1000];
	int B, r = 0, Q;
	scanf("%s %d", A, &B);
	bign a = change(A);
	bign c = div(a, B, r);
	print(c);
	printf(" %d", r);
	return 0;
} 
