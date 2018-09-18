#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>

using namespace std;

void reverse(char s[]) {
	int len = strlen(s);
	for(int i = 0; i < len/2; i++) {
		swap(s[i], s[len-1-i]);
	} 
} 
int main() {
	char A[110], B[110], temp[110] = {0};
	scanf("%s %s", A, B);
	reverse(A);
	reverse(B); 
	int len1 = strlen(A);
	int len2 = strlen(B);
	int len = len1 > len2 ? len1 : len2; 
	int a, b;
	int k = 0;
	char X[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
	for(int i = 0; i <len; i++) {
		a = i < len1 ? A[i] - '0' : 0;
		b = i < len2 ? B[i] - '0' : 0;
		if(i % 2 == 0) {
			temp[k++] = X[(b+a)%13];
		} else {
			int count = 0;
			count = b - a;
			if(count < 0) count += 10;
			temp[k++] = X[count];
		}
	}
	reverse(temp);
	puts(temp);
	return 0;
}
