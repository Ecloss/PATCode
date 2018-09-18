#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int a, b, maxA = 0, maxB, len = 0;
double c, c1, c2;
int M, X, Y;
void print(double t) {
	if(t < M) printf(" Gai");
	else if(t == M) printf(" Ping");
	else if(t >= M) printf(" Cong");
}

int main() {
	scanf("%d %d %d", &M, &X, &Y);
	for(int i = 1; i <= 9; i++) {
		for(int j = 0; j <= 9; j++) {
			a = i*10 + j;
			b = i + j*10;
			if(a != b) {
				c2 = (double)b / Y;
				if(a >= b) c1 = (double)a / (X+Y);
				else c1 = (double)a / (Y - X);
				if(c1 == c2) {
					c = c2, maxB = b, len++;
					if(maxA < a) maxA = a;
				}
			}
		}
	}
	if(len == 0) printf("No Solution");
	else {
		printf("%d", maxA);
		print(1.0*maxA);
		print(1.0*maxB);
		print(c);
	}
	return 0;
} 
