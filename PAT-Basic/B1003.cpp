#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main() {
	// �����ж�������1.�Ƿ����PT�� ����PTʱ����ߣ��м䣬�ұ߾��м���A
	int n, a[12];
	char str1[110];
	cin >> n;
	for(int i = 0; i < n; i++) {
		scanf("%s", str1);
		int len1 = strlen(str1);
		// ���ڵ�˼·����ô�ж��Ƿ���PT
		// �� �� �� ���м���A
		// p�ĸ����� t�ĸ����� PAT֮��ĸ��� 
		int num_p = 0, num_t = 0, num_other = 0;
		int loc_p = -1, loc_t = -1;
		for(int i = 0; i <len1; i++) {
			if(str1[i] == 'P') {
				num_p++;
				loc_p = i;
			} else if(str1[i] == 'T') {
				num_t++;
				loc_t = i;
			} else if(str1[i] != 'A') {
				num_other++;
			}
		}
		// ���P��T��������Ϊ1�� PAT֮�����������ĸ��PT֮��û���ַ� �����NO 
		if(num_p != 1 || num_t != 1 || num_other > 0 || loc_t - loc_p <= 1) {
			printf("NO\n");
			continue;
		} 
		// �����ж��� �� �� �ĸ��� 
		int left = 0, center = 0, right = 0;
		left = loc_p;
		center = loc_t - loc_p - 1;
		right = len1 - loc_t - 1;
		if(right == left * center) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	} 
	 
	return 0;
}
