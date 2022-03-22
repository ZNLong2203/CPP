#include<bits/stdc++.h>
using namespace std;

void work(string s,long long m) {
	long long du = 0;
	for(int i=0; i < s.size(); i++) {
		du = (du*10 + (s[i]-'0'))%m;
	}
	cout << du << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string n;
		long long m;
		cin >> n >> m;	
		work(n,m);
	}
}