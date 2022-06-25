#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	fflush(stdin);
	scanf("\n");
	getline(cin,s);
	string kq = "";
	for(int i=0;i<s.size();i++) {
		if(isdigit(s[i])) kq+=s[i];
	}
	if(kq[0]=='8' && kq[1]=='4') {
		kq.erase(kq.begin());
		kq.erase(kq.begin());
	}
	if(kq[0]!='0') kq.insert(0,"0");
	cout << kq << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}