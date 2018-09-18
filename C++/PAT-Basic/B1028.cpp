#include<stdio.h>
struct People{
	char name[10];
	int year;
	int month;
	int day;
}temp, age_max, age_min;

int main() {
	int n, num = 0;
	age_max.year = 2015, age_min.year = 1813;
	age_max.month = 13, age_min.month = 0;
	age_max.day = 32, age_min.day = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s %d/%d/%d", temp.name, &temp.year, &temp.month, &temp.day);
		if( (temp.year == 1814 && temp.month == 9 && temp.day >= 6) 
			|| (temp.year > 1814) 
			|| (temp.year == 1814 && temp.month > 9 && temp.month <= 12)
			|| (temp.year <2014) 
			|| (temp.year == 2014 && temp.month < 9) 
			|| (temp.year == 2014 && temp.month == 9 && temp.day <= 6) ) {
				num++;
				
				if(temp.year < age_max.year) age_max = temp;
				if(temp.year == age_max.year &&temp.month < age_max.month) age_max = temp;
				if(temp.year == age_max.year && temp.month == age_max.month && temp.day < age_max.day) 
				age_max = temp;
				
				if(temp.year > age_min.year) age_min = temp;
				if(temp.year == age_min.year && temp.month > age_min.month) age_min = temp;
				if(temp.year == age_min.year && temp.month == age_min.month && temp.day > age_min.day )
				age_min = temp;
			}	
	}
	printf("%d %s %s", num, age_max.name, age_min.name);
	return 0;
}

