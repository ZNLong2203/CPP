#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	map<string,int> mp;
	while(t--) {
		scanf("\n");
		getline(cin,s);
		mp[s]++;
	}
	cout << mp.size();
}