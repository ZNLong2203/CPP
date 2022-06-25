#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s1,s2;
	cin >> s1 >> s2;
	string tmp="";
	for(int i=0;i<s2.size();i++) {
		if(s2[i]>='A' && s2[i]<='Z') {
			tmp+=s2[i];
		} 
	}	
	int cnt1=0,cnt2=0,id1=0,id2=0;
	for(char i:tmp) {
		if(i-'A'+'0'==s1[id1]) {
			++cnt1;
			++id1;
		} else if(i-'K'+'0'==s1[id2]) {
			++cnt2;
			++id2;
		}
	}
	if(cnt1==s1.size() || cnt2==s1.size()) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}