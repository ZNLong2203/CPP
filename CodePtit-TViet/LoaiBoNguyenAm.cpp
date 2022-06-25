#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	string kq = "";
	for(int i=0;i<s.size();i++) {
		s[i] = tolower(s[i]);
	}
	for(int i=0;i<s.size();i++) {
		if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y') {
			cout << "." << s[i];
		}
	}
}

int main() {
	solve();
}