#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int M, X, Y;
void print(double t) {
	if(t < M) printf(" Gai");
	else if(t == M) printf(" Ping");
	else if(t >= M) printf(" Cong");
}

int main() {
	scanf("%d %d %d", &M, &X, &Y);
	for(int i = 99; i >= 10; i--) {
		int j = i%10*10 + i / 10;
		double c = abs(i - j) * 1.0 / X;
		if(c*Y == j) {
			cout << i;
			print(1.0*i); print(1.0*j); print(c);
			return 0;
		}		
	}
	printf("No Solution");
	return 0;
} 
