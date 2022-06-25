#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	ll kq = 0,xet = 0;
	for(int i=0;i<s.size();i++) {
		if(isdigit(s[i])) {
			while(isdigit(s[i])) {
				xet = xet*10+(s[i]-'0');
				i++;
			}
		}
		if(xet>kq) kq = xet;
		xet = 0;
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}