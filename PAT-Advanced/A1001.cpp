#include<stdio.h>
#include<math.h>

int main() {
	int a, b, temp, i = 0;
	scanf("%d %d", &a, &b);
	temp = a + b;
	if(temp < 0) {
		printf("-");
		temp = -temp;
	}
	int str[10];
	if(temp == 0) str[i++] = 0; 
	while(temp != 0) {
		str[i++] = temp%10;
		temp = temp/10;
	}
	for(int j = i-1; j >= 0; j--) {
		printf("%d", str[j]);
		if(j != 0 && j % 3 == 0) printf(",");
	}
	return 0; 
}
