#include<stdio.h>
struct Mon{
	int g;	// Galleon
	int s;	// Sickle 0-17
	int k;	// Knut 0-29
}P, A, temp;

int main() {
	// 输入应付 和 实付的钱 
	scanf("%d.%d.%d %d.%d.%d", &P.g, &P.s, &P.k, &A.g, &A.s, &A.k);
	int ifFlag;
	if(A.k < P.k) {
	temp.k = A.k + 29 - P.k;
	A.s = A.s - 1;
	} else temp.k = A.k - P.k;
	if(A.s < P.s) {
		temp.s = A.s + 17 - P.s;
		A.g = A.g -1;
	} else temp.s = A.s - P.s;
	temp.g = A.g - P.g; 
//	if(temp.g < 0) {
//		temp.s = 17 - temp.s;
//		temp.k = 29 - temp.k;
//	}
	
	printf("%d.%d.%d", temp.g, temp.s, temp.k);
	return 0;
}
