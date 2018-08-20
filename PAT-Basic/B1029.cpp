#include<cstdio>
#include<cstring>

bool isFlag[124] = {false};

int hashFunc(char a) {
	int id = 0;
	if(a >= '0' && a <= '9') id = a - '0';
	if(a == '_') id = 10;
	if(a >= 'A' && a <= 'Z') id = a - 'A' + 11;
	if(a >= 'a' && a <= 'z') id = a - 'a' + 37;
	return id;
}

int main() {
	char should[100], test[100], x;
	int num;
	gets(should);
	gets(test);
//	scanf("%s", should);
//	scanf("%s", test);
	int len = strlen(test);
	int len1 = strlen(should);
	for(int i = 0; i < len; i++) {
		x = test[i];
		num = hashFunc(x);
		isFlag[num] = true;
	}
	for(int i = 0; i < len1; i++) {
		x = should[i];
		num = hashFunc(x);
		if(isFlag[num] == false) {
			if(should[i] >= 'a' && should[i] <= 'z') printf("%c", should[i]-32);
			else printf("%c", should[i]);
			isFlag[num] = true;
		}
	}
	return 0;
} 
