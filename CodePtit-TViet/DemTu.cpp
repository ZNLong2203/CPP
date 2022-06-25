#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		scanf("\n");
		getline(cin,s);
		stringstream ss(s);
		long long cnt = 0;
		while(ss >> s) {
			cnt++;
		}
		cout << cnt << endl;
	}
}