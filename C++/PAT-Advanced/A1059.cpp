#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

struct factor{
	int x, cut;		// x代表质因子， cut代表质因子的个数 
}f[11];

// 因为给出的是int范围内的整数
// 判断是否是素数
bool isPrimare(int n) {
	if(n <= 1) return false;
	int sqr = (int)sqrt(1.0 * n);
	for(int i = 2; i <= sqr; i++) {
		if(n % i == 0) return false;
	}
	return true;
} 

// 求出素数表
const int maxn = 100010;
int p[maxn] = {0}, pNum = 0;
void FindPrimare() {
	for(int i = 1; i < maxn; i++) {
		if(isPrimare(i) == true) {
			p[pNum++] = i;
		}
	}
} 

int main() {
	FindPrimare();
	int n, num = 0;
	scanf("%d", &n);
	if(n == 1) printf("1=1");
	else {
		printf("%d=", n); 
		int q = (int)sqrt(1.0 * n);
		for(int i = 0; i < pNum && p[i] <= q; i++) {
			if(n % p[i] == 0) {
				f[num].x = p[i];
				f[num].cut = 0;
				while(n % p[i] == 0) {
					f[num].cut++;
					n = n / p[i];
				}
				num++;
			}
			if(n == 1) break;
		}
		if(n != 1) {
			f[num].x = n;
			f[num].cut = 1;
			num++;
		}
		for(int i = 0; i < num; i++) {
			printf("%d", f[i].x);
			if(f[i].cut > 1) printf("^%d", f[i].cut);
			if(i < num-1) printf("*");
		}
	}
	
	return 0;
}
