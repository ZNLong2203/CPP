#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	ll xet = 0, sum = 0;
	for(int i=0;i<s.size();i++) {
		if(isdigit(s[i])) {
			while(isdigit(s[i])) {
				xet = xet*10+(s[i]-'0');
				i++;
			}
		}
		sum+=xet;
		xet = 0;
	}	
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}