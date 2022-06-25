#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string> v;
	for(int i=0;i<n;i++) {
		string x; cin >> x;
		v.push_back(x);
	}
	set<char> s;
	for(int i=0;i<v.size();i++) {
		for(int j=0;j<v[i].size();j++) {
			char c = v[i][j];
			s.insert(c);
		}
	}
	cout << s.size();
}