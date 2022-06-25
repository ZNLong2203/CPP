#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(string s, int n) {
	ll xet = 0;
	int cnt = 0;
	for(int i=0;i<s.size();i++) {
		for(int j=i;j<s.size();j++) {
			xet = xet*10+(s[j]-'0');
			if(xet%n==0) cnt++;
			xet%=n;
		}
		xet = 0;
	}
	return cnt;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << solve(s,8) - solve(s,24) << endl;
	}
}