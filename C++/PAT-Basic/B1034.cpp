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

// 分子的乘法
Fraction mult(Fraction a, Fraction b) {
	Fraction c;
	c.up = a.up * b.up;
	c.down = a.down * b.down;
	return reduction(c);
} 

// 分子的除法
Fraction divide(Fraction a, Fraction b) {
	Fraction c;
	c.up = a.up * b.down;
	c.down = a.down * b.up;
	return reduction(c);
} 

// 分数的输出
void printFra(Fraction r) {
	r = reduction(r);
	if(r.up * r.down < 0) {
		if(r.down == 1) printf("(%lld)", r.up);
		else if(abs(r.up) > abs(r.down)) printf("(%lld %lld/%lld)", r.up/r.down, abs(r.up)%r.down, r.down);
		else {
			printf("(%lld/%lld)", r.up, r.down);
		}
	} else {
		if(r.up == 0) printf("%lld", r.up);
		else if(r.down == 1) printf("%lld", r.up);
		else if(r.up > r.down) printf("%lld %lld/%lld", r.up/r.down, r.up%r.down, r.down);
		else {
			printf("%lld/%lld", r.up, r.down);
		}
	} 
	
} 

int main() {
	Fraction a, b;
	scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
	char alg[4][5] = {" + ", " - ", " * ", " / "};
	for(int i = 0; i < 4; i++) {
		printFra(a);
		printf("%s", alg[i]);
		printFra(b);
		printf(" = ");
		switch(i) {
			case 0:
				printFra(add(a, b));
				break;
			case 1:
				printFra(sub(a, b));
				break;
			case 2:
				printFra(mult(a, b));
				break;
			default:
				if(b.up == 0) {
					printf("Inf");
				} else {
					printFra(divide(a, b));
				}
		}
		if(i != 3)	printf("\n");
	}
	return 0;
}

