#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long ll;

// 本题用到了分数的加减，化简，寻找公约数, 分子的输出 
int gcd(ll a, ll b) {
	if(b == 0) return a;
	else return gcd(b, a%b);
}

// 分数的构造体
struct Fraction{
	long long up, down;
}; 

// 分数的化简
Fraction reduction(Fraction r) {
	if(r.down < 0) {
		r.up = -r.up;
		r.down = -r.down;
	}
	if(r.up == 0) r.down = 1;
	else {
		ll d = gcd(abs(r.up), abs(r.down));
		r.up = r.up / d;
		r.down = r.down / d;
	} 	
	return r;
}

// 分数的加法
Fraction add(Fraction a, Fraction b) {
	a = reduction(a), b = reduction(b);
	Fraction c;
	c.down = a.down * b.down;
	c.up = a.up * b.down + a.down * b.up;
	return reduction(c);
} 

// 分数的减法
Fraction sub(Fraction a, Fraction b) {
	a = reduction(a), b = reduction(b);
	Fraction c;
	c.down = a.down * b.down;
	c.up = a.up * b.down - a.down * b.up;
	return reduction(c);
} 

// 分数的输出
void printFra(Fraction r) {
	r = reduction(r);
	if(r.down == 1) printf("%lld", r.up);
	else if(r.up > r.down) printf("%lld %lld/%lld", r.up/r.down, r.up%r.down, r.down);
	else {
		printf("%lld/%lld", r.up, r.down);
	}
} 

int main() {
	int N;
	Fraction a, sum;
	sum.up = 0, sum.down = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%lld/%lld", &a.up, &a.down);
		sum = add(sum, a);
	}
	printFra(sum);
	return 0;
}

