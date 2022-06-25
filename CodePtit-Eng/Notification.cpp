#include<bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	fflush(stdin);
	scanf("\n");
	getline(cin,s);
	int sum = 0;
	stringstream ss(s);
	while(ss >> s) {
		if(sum+s.size()<=100) {
			cout << s << " ";
			sum+=s.size()+1;
		}	else break;
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}