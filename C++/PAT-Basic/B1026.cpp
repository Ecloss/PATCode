#include<stdio.h>
#include<time.h>

int main() {
	int c1, c2;
	int time;
	scanf("%d %d", &c1, &c2);
	if(c1 < c2) {
		time = (c2 - c1);
		if(time % 100 >= 50) {
			time = time / 100 + 1;
		} else {
			time = time / 100;
		}
		printf("%02d:%02d:%02d", time/3600, time %3600 / 60, time % 60);
	}
	return 0;
} 
