#include<stdio.h>

int main() {
	// 首先输入一个数字，不大于1000
	int a;
	int b = 0;
	scanf("%d", &a);
	if(a <= 1000) {
		while( a != 1) {
		if(a % 2 == 0) {
			a = a / 2;
			b++;
		}
		 else {
			a = (3 * a + 1) / 2;
			b++; 
		}		
		}
	}
	printf("%d", b);
	 return 0;
}
