#include<cstdio> 
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

void to_array(int a[], int n) {
	for(int i = 0; i < 4; i++) {
		a[i] = n % 10;
		n = n / 10;
	}
}

int to_number(int a[]) {
	 int n = 0;
	 for(int i = 0; i < 4; i++){
	 	n = n * 10 + a[i]; 
	 }  
	 return n;
}

int main() {
	// n�������洢��������֣� a��ת��������飬min����������С����
	// max��ת����������� 
	int n, a[5], min, max;
	scanf("%d", &n);
	while(true) {
		to_array(a, n);
		sort(a, a + 4);
		min = to_number(a);
		sort(a, a + 4, cmp);
		max = to_number(a);
		n = max - min;
		printf("%04d - %04d = %04d\n", max, min, n);
		if(n == 0 || n == 6174) break;
	}
	return 0;
}
