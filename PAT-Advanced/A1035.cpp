#include<stdio.h>
#include<string.h>
// 定义一个构造函数，str用来接收输入的id和pwd， temp用来接收需要修改的id和pwd 
struct UserName{
	char id[20];
	char pwd[20];
}str[1010], temp[1010];

int main() {
	int N;
	scanf("%d", &N);
	// pass为无需修改的账户，modify已经修改的账户 
	int modify = 0;
	for(int i = 0; i < N; i++) {
		// isFlag 用来判断缩输入的这个账户是否需要修改，如果没有修改pass++, 否则modify++ 
		bool isFlag = true;
		scanf("%s %s", str[i].id, str[i].pwd);
		int len = strlen(str[i].pwd);
		for(int j = 0; j < len; j++) {
			if(str[i].pwd[j] == '1') {
				isFlag = false;
				str[i].pwd[j] = '@';
			} else if(str[i].pwd[j] == '0') {
				isFlag = false;
				str[i].pwd[j] = '%';
			} else if(str[i].pwd[j] == 'l') {
				isFlag = false;
				str[i].pwd[j] = 'L';
			} else if(str[i].pwd[j] == 'O') {
				isFlag = false;
				str[i].pwd[j] = 'o';
			}
		}
		if(!isFlag) temp[modify++] = str[i]; 
	}
	if(modify == 0) {
		if(N == 1) printf("There is %d account and no account is modified", N);
		else printf("There is %d accounts and no account is modified", N);
	} else {
		printf("%d\n", modify);
		for(int k = 0; k < modify; k++) {
			printf("%s %s\n", temp[k].id, temp[k].pwd);
		}
	}
	return 0;
}
