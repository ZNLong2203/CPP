#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s1,s2;
	cin >> s1 >> s2;
	for(int i=0;i<s1.size();i++) if(s1[i]=='6') s1[i]='5';
	for(int i=0;i<s2.size();i++) if(s2[i]=='6') s2[i]='5';
	cout << stoll(s1) + stoll(s2) << " ";
	for(int i=0;i<s1.size();i++) if(s1[i]=='5') s1[i]='6';
	for(int i=0;i<s2.size();i++) if(s2[i]=='5') s2[i]='6';
	cout << stoll(s1) + stoll(s2) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}