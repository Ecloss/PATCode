#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct bign{
	int d[150];
	int len;
	bign() {
		len = 0;
		memset(d, 0, sizeof(d));
	}
};

bign change(char a[]) {
	bign c;
	c.len = strlen(a);
	for(int i = 0; i < c.len; i++) {
		c.d[i] = a[c.len - 1 - i] - '0';
	}
	return c;
}

int compare(bign a, bign b) {
	if(a.len > b.len) return 1;
	else if(a.len < b.len) return -1;
	else {
		for(int i = a.len-1; i >= 0; i--) {
			if(a.d[i] > b.d[i]) return 1;
			else if(a.d[i] < b.d[i]) return -1;
		}
		return 0;
	}
}

bign add(bign a, bign b) {
	bign c;
	int carry = 0;
	for(int i = 0; i < a.len || i < b.len; i++) {
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp % 10;
		carry = temp / 10;
	}
	if(carry != 0) {
		c.d[c.len++] = carry;
	}
	return c;
}

void print(bign a) {
	for(int i = a.len - 1; i >= 0; i--) {
		printf("%d", a.d[i]);
	}
}

int main() {
	bign a, b;
	char x[18];
	int step, i = 0;
	scanf("%s %d", x, &step);
	a = change(x);
	for(; i < step; i++) {
		b = a;
		std::reverse(b.d, b.d+b.len);
		if(compare(a, b) == 0) break;
		else a = add(a, b);
	}
	print(a);
	printf("\n%d", i);
	return 0;
}


