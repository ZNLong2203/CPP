#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s,xet;
	scanf("\n");
	getline(cin,s);
	stringstream ss(s);
	int cnt = 0;
	int odd = 0, even = 0;
	while(ss >> xet) {
		cnt++;
		if((xet[xet.size()-1]-'0')%2==0) even++;
		else odd++;
	}	
	if(odd>even && cnt%2!=0) cout << "YES\n";
	else if(odd<even && cnt%2==0) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}