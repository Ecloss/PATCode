#include<cstdio>
#include<iostream>
using namespace std;

// 一直规律是： (n + 1 - i) * i 
const int maxn = 100010;
int main() {
	int n;
	double x, count = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> x;
		count += x * (n + 1 - i) * i;
	} 
	printf("%.2f", count);
	return 0;
}
