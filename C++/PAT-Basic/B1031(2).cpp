#include<stdio.h>
struct ID{
	char id[18];
}id[110], fal[110]; 

//用来显示校验码M的值 
char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

// 写一个方法，用来判断输入的身份证是否有误 
bool isFlag(char a[18]) {
	int num = 0, j, x;
	for(int i = 0; i < 17; i++) {
		j = a[i] - '0';
		if(j > 9 || j < 0) return false;
		else num += j;
	}
	x = num%11;
	if(a[17] != M[x]) return false;
	else return true;
}

int main() {
	int N, num = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++) {
		scanf("%s", id[i].id);
		bool flag = isFlag(id[i].id);
		if(flag == true) printf("Y");
		else printf("N");
		if(flag == false) {
			fal[num++] = fal[i];			
		}  
	} 
	if(num = 0) printf("All passed");
	else {
		for(int i = 0; i < num; i++) {
			printf("%s\n", fal[i].id);
		}
	}
	
}
