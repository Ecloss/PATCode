#include<stdio.h>
#include<string.h>

int main() {
	char week[7][5] = {
        "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"
    };
	char a1[65], a2[65], b1[65], b2[65];
	gets(a1);
	gets(a2);
	gets(b1);
	gets(b2);
	int str1 = strlen(a1);
	int str2 = strlen(a2);
	int str3 = strlen(b1);
	int str4 = strlen(b2);
	int i;
	for(i = 0; i < str1 && i < str2; i++) {
		if(a1[i] == a2[i] && a1[i] >= 'A' && a1[i] <= 'G') {
			printf("%s ", week[a1[i] - 'A']);
			break;
		}	
	}
    for(i++; i < str1 && i < str2; i++) {
        if(a1[i] == a2[i]) {
            if(a1[i] >= '0' && a2[i] <= '9') {
                printf("%02d:", a1[i] - '0');
                break;
            } else if(a1[i] >= 'A' && a2[i] <= 'N') {
                printf("%02d:", a1[i] - 'A' + 10);
                break;
            }
        }
    }
    for(i = 0; i < str3 && i < str4; i++) {
        if(b1[i] == b2[i]) {
            if((b1[i] >= 'A' && b1[i] <= 'Z') || (b1[i] >= 'a' && [i] <= 'z')) {
                printf("%02d", i);
                break;
            }
        }
    }
	return 0;
}

