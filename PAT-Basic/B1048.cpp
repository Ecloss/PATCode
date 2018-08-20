#include<stdio.h>
#include<string.h>

int main() {
	char A[110], B[110], temp[110];
	scanf("%s %s", A, B);
	int len1 = strlen(A);
	int len2 = strlen(B);
	int a, b;
	int k = 0;
	char X[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
	for(int i = len2-1, j = len1-1; i >= 0; j--, i--) {
		if(j < 0) a = 0;
		else a = A[j] - '0';
		b = B[i] - '0';
		if(i % 2 == 0) {
			temp[k++] = X[(a+b)%13];
		} else {
			int num = b - a;
			if(num < 0) num += 10;
			else num = num%10;
			temp[k++] = X[num];
		}
	}
	for(int j = len2-1; j >= 0; j--) {
		printf("%c", temp[j]);
	}
	return 0;
}
