#include<stdio.h>
struct People{
	char name[10];
	int y, m, d;
}age_max, age_min, left, right, temp;

// 获得最小年龄的函数 
bool lessEqu(People min, People left) {
	if(min.y != left.y) return min.y >= left.y;
	else if(min.m != left.m) return min.m >= left.m;
	else if(min.d != left.d) return min.d >= left.d;
}

// 获得最大年龄的函数 
bool moreEqu(People max, People right) {
	if(max.y != right.y) return max.y <= right.y;
	else if(max.m != right.m) return max.m <= right.m;
	else if(max.d != right.d) return max.d <= right.d;
} 

// 初始化这些函数 
void init() {
	age_min.y = left.y = 1814;
	age_max.y = right.y = 2014;
	age_min.m = left.m = age_max.m = right.m = 9;
	age_min.d = left.d = age_min.d = right.d = 6;
}

int main() {
	int n, num = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %d/%d/%d", temp.name, &temp.y, &temp.m, &temp.d);
		if(lessEqu(temp, left) && moreEqu(temp, right)) {
			num++;
			if(lessEqu(temp, age_min)) age_min = temp;
			if( moreEqu(temp, age_max) ) age_max = temp;
		}
	}
	printf("%d %s %s\n", num, age_max.name, age_min.name);
	return 0;
}
