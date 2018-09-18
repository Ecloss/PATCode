// 第一步：构造体写好，库存，总售价，单价
// 第二步：按照单价进行从大到小排序
// 第三步：循环，然后进行判断
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 1010;
struct Cake{
	double stock;	// 库存
	double total;	// 总售价
	double price;	// 单价 
}cake[maxn]; 

bool cmp(Cake a, Cake b) {
	return a.price > b.price;
}

int main() {
	// N--月饼种类， D：总需求量
	int N;
	double D;
	// 最关键的一步：输入N， 和D
	scanf("%d %lf", &N, &D); 
	// 第一步：将月饼库存量循环存储到cake的stock
	for(int i = 0; i < N; i++) {
		scanf("%lf", &cake[i].stock);
	}
	// 第二步：输入每个月饼的总售价
	for(int i = 0; i < N; i++) {
		scanf("%lf", &cake[i].total);
		cake[i].price = cake[i].total / cake[i].stock;
	}
	// 第三步：按照单价排序
	sort(cake, cake+N, cmp);
	// 第四步：获得最大利润
	double money = 0;
	for(int i = 0; i < N; i++) {
		if(D >= cake[i].stock) {
			money += cake[i].total;
			D -= cake[i].stock;
		} else {
			money += cake[i].price*D;
			break;
		}
	}
	printf("%.2f", money);
	return 0;
}
