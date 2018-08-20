#include<cstdio>
#include<cstring>

int main() {
	char in[10010], c1, c2;
	char out[6] = {'P', 'A', 'T', 'e', 's', 't'};
	int temp[128] = {0};
	scanf("%s", in);
	int len = strlen(in);
	for(int i = 0; i < len; i++) {
		c1 = in[i];
		if(in[i] == 'P' || in[i] == 'A' || in[i] == 'T' || in[i] == 'e' || in[i] == 's' || in[i] == 't') {
			temp[c1]++;
		}
	}
	int count = 0;
	for(int i = 0; i < 6; i++) {
		c2 = out[i];
		if(temp[c2] == 0) count++;
		else if(temp[c2] != 0) {
			pritnf("%c", c2);
			temp[c2]--;
		}
	}
	return 0;
} 
