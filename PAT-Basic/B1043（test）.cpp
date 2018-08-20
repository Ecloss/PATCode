#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

const int maxn = 10010;
int main() {
    char in[maxn], c1, c2;
    char out[6] = {'P', 'A', 'T', 'e', 's', 't'};
    int temp[128] = {0};
//    scanf("%s", in);
    cin.get(in, maxn); 
    int len = strlen(in);
    for(int i = 0; i < len; i++) {
        c1 = in[i];
        if(in[i] == 'P' || in[i] == 'A' || in[i] == 'T' || in[i] == 'e' || in[i] == 's' || in[i] == 't') {
            temp[c1]++;
        }
    }
	while(true) {
		int count = 0;
    	for(int i = 0; i < 6; i++) {
	        c2 = out[i];
	        if(temp[c2] > 0) {
	        	printf("%c", c2);
	        	count++; 
	            temp[c2]--;
	        }
    	}
    	if(count == 0) break;
	}
    
    return 0;
}
