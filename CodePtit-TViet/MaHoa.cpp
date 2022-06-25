#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	string kq = "";
	kq+=s[0];
	int cnt = 1;
	for(int i=1;i<s.size();i++) {
		if(s[i]!=s[i-1]) {
			kq+=to_string(cnt);
			kq+=s[i];
			cnt = 1;
		} 	else cnt++;
	}
	kq+=to_string(cnt);
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}