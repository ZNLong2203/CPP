#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	multiset<char> st;
	int xet=0, sum=0;
	for(int i=0;i<s.size();i++) {
		if(isalpha(s[i])) st.insert(s[i]);
		else {
			xet=s[i]-'0';
			while(xet>0) {
				sum+=xet%10;
				xet/=10;
			}
		}
	}	
	for(auto x:st) cout << x;
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}