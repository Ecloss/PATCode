#include<stdio.h>
#include<string.h>

int X[20] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char M[15] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main() {
	int N;
	bool isFlag = true;
	char str[20];
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%s", str);
		int j, last = 0;;
		for(j = 0; j < 17; j++) {
			if(!(str[j] >= '0' && str[j] <= '9')) break;
			last = last + (str[j] - '0') * X[j];
		}
		if(j < 17) {
			isFlag = false;
			printf("%s\n", str);
		} else {
			if(str[17] != M[last%11]) {
				isFlag = false;
				printf("%s\n", str);
			}
		}
	}
	if(isFlag) printf("All passed\n");
	return 0;
}
