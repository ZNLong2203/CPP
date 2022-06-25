#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string s) {
	ll xet = 0;
	int count = 0;
	for(int i=0;i<s.size();i++) {
		if(isdigit(s[i])) {
			xet=xet*10+(s[i]-'0');
		}	else if(s[i]=='.') {
			if(xet>255 || xet<0) {
				cout << "NO\n";
				return;
			}
			xet = 0;
			count++;
		}
	}
	if(count==3) {
		cout << "YES\n";
	}	else cout << "NO\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		solve(s);
	}
}