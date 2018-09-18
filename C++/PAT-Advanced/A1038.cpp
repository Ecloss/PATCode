#include<cstdio>
#include<string>
#include<iostream> 
#include<algorithm>

using namespace std;

const int maxn = 10010;
string str[maxn];

bool cmp(string a, string b) {
	return a + b < b + a;	// ���a+b < b+a ��ôa����ǰ�� 
}

int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {
		cin >> str[i];
	}
	sort(str, str+N, cmp);
	string ans;
	for(int i = 0; i < N; i++) {
		ans += str[i];
	}
	while(ans.size() > 0 && ans[0] == '0') {
		ans.erase(ans.begin());
	}
	if(ans.size() == 0) cout << 0;
	else cout << ans;
	return 0;
} 
