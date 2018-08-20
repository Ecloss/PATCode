#include<stdio.h>

struct Time{
	char id[20];
	int hh, mm, ss;
} early, late, temp;

// ±È½ÏË­×îÔç 
bool earlyThan(Time a, Time b) {
	if(a.hh != b.hh) return a.hh < b.hh;
	else if(a.mm != b.mm) return a.mm < b.mm;
	else if(a.ss != b.ss) return a.ss < b.ss;
}
 
void init() {
	early.hh = 24, early.mm = 60, early.ss = 60;
	late.hh = 0, late.mm = 0, late.ss = 0;
}

int main() {
	init();
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %d:%d:%d", temp.id, &temp.hh, &temp.mm, &temp.ss);
		if( earlyThan(early, temp) == false ) {
			early=temp;
		}
		scanf("%d:%d:%d", &temp.hh, &temp.mm, &temp.ss); 
		if( earlyThan(late, temp) == true ) {
			late = temp;
		}
	}	
	printf("%s %s", early.id, late.id);
	return 0;
}



