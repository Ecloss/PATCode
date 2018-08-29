#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct bign{
	int d[30];
	int len;
	bign() {
		len = 0;
		memset(d, 0, sizeof(d));
	}
};

//	2. change
bign change(char a[]) {
	bign c;
	c.len = strlen(a);
	for(int i = 0; i < c.len; i++) {
		c.d[i] = a[c.len - 1 - i] - '0';
	}
	return c;
}

//	3. compare
int compare(bign a, bign b) {
	if(a.len > b.len) return 1;
	else if(a.len < b.len) return -1;
	else {
		for(int i = 0; i < a.len; i++) {
			if(a.d[i] > b.d[i]) return 1;
			else if(a.d[i] < b.d[i]) return -1;
		}
		return 0;
	}
}

// 4. print
void print(bign a) {
	for(int i = a.len - 1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
}

// 5. 高精度整数 与 低精度整数的乘法
bign mult(bign a, int b) {
	bign c;
	int carry = 0;
	for(int i = 0; i < a.len; i++) {
		int temp = a.d[i] * b + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	while(carry != 0) {
		c.d[c.len++] = carry % 10;
		carry = carry / 10;
	}
	return c;
}

// 6.cmp
bool cmp(int a, int b) {
	return a < b;
}

int main() {
	char A[30];
	scanf("%s", A);
	bign a = change(A);
	bign c = mult(a, 2);
	bign d = c;
	sort(a.d, a.d+a.len);
	sort(c.d, c.d+c.len);
	int x = compare(a, c);
	if(x == 0) printf("Yes\n");
	else printf("No\n");
	print(d);
	return 0;
}
