#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[5] = {0}, count[5] = {0};
	int n, num;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		int p = num % 5;
		if(p == 0) {
			if(num % 2 == 0) {
				count[0]++;
				a[0] += num;
			}
		} else if(p == 1) {
			count[1]++;
			if(count[1] % 2 == 0) a[1] += num;
			else a[1] -= num;
		} else if(p == 2) {
			count[2]++;
		} else if(p == 3) {
			count[3]++;
			a[3] += num;
		} else if(p == 4) {
			count[4]++;
			if(num > a[4]) a[4] = num;
		}
	}
	
	if(count[0] == 0) {
		printf("N");
	} else {
		printf("%d", a[0]);
	}
	if(count[1] == 0) printf(" N");
	else printf(" %d", a[1]);
	if(count[2] == 0) printf(" N");
	else printf(" %d", count[2]);
	if(count[3] == 0) printf(" N");
	else printf(" %.1lf", (double)a[3]/count[3]);
	if(count[4] == 0) printf(" N");
	else printf(" %d", a[4]);
		
	return 0;
}
