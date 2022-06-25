#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		string xet = s;
		reverse(s.begin(),s.end());
		if(s==xet) cout << "YES\n";
		else cout << "NO\n";
	}
}