#include<cstdio>
#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	int n, left = 0, right = 0, now, a = 1;
	int ans = 0;
	cin >> n;
	while(n/a != 0) {
		now = n / a % 10;
		left = n / (a * 10);
		right = n % a;
		if(now == 0) ans += left * a;
		else if(now == 1) ans += left*a + right + 1;
		else if(now >= 2) ans += (left + 1) * a;
		a *= 10;
	}
	cout << ans << endl;
	return 0;
} 
