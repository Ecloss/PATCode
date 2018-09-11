#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn = 100010;

int main() {
	long long a[maxn], ans = 1, M, p;
	cin >>M>>p; 
	for(int i = 0; i < M; i++) {
		cin>>a[i];
	}
	sort(a, a+M);
   for (int i = 0; i < M; ++i) {
        for (int j = i+ans-1; j < M;++j){
            if (a[j] <= a[i]*p) {
                if (j-i+1 > ans) {
                    ans = j - i + 1;
                }
            }else{
                break;
            }
        }
    }
	cout << ans;
	return 0;
}