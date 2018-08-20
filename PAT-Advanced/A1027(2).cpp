#include<stdio.h>
char str[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};

int main() {
	int r, g, b;
	scanf("%d %d %d", &r, &g, &b);
	printf("#");
	printf("%c%c", str[r/13], str[r%13]);
	printf("%c%c", str[g/13], str[g%13]);
	printf("%c%c", str[b/13], str[b%13]);	
	return 0;
}
