#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int cnt = 0;
	for(int i=0;i<s.size();i++) {
		for(int j=i+1;j<s.size();j++) {
			if(s[i]==s[j]) cnt++;
		}
	}	
	cout << cnt+s.size() << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}