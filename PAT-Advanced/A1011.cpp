#include<stdio.h>
char a[3] = {'W','T','L'};

int main() {
    double mon = 1.0, temp, a1;
	int idx;
	// 通过这个双重循环，可以得到三场比赛的最高赔率和胜负的结果 
	for(int i = 0; i < 3; i++) {
		temp = 0.0;
		for(int j = 0; j < 3; j++){ //寻找该行最大的数字存于 temp
            scanf("%lf", &a1);
            if(a1 > temp){
                temp = a1;
                idx = j;
            } 
        }
		mon *= temp;
		printf("%c ", a[idx]);
	}
	mon = (mon*0.65 -1) * 2;
	printf("%.2f", mon);
	return 0;
}
