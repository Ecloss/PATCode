#include<stdio.h>
char a[3] = {'W','T','L'};

int main() {
    double mon = 1.0, temp, a1;
	int idx;
	// ͨ�����˫��ѭ�������Եõ�����������������ʺ�ʤ���Ľ�� 
	for(int i = 0; i < 3; i++) {
		temp = 0.0;
		for(int j = 0; j < 3; j++){ //Ѱ�Ҹ����������ִ��� temp
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
