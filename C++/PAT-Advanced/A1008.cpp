#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

int main() {
	int old = 0, now, n, x, count = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> now;
		x = now - old;
		if(x > 0) {
			count += x*6;
		} else {
			count += abs(x*4);
		}
		old = now;
	}
	count += n*5;
	cout << count << endl;
	return 0;
} 
