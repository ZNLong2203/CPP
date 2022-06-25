#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s, xet;
	getline(cin,s);
	vector<string> v;
	stringstream ss(s);
	while(ss >> xet) {
		for(int i=0;i<xet.size();i++) {
			if(isupper(xet[i])) xet[i]+=32;
		}
		if(islower(xet[0])) xet[0]-=32;
		v.push_back(xet);
	}
	for(int i=0;i<v.size()-1;i++) {
		cout << v[i];
		if(i==v.size()-2) cout << ", ";
		else cout << " ";
	}
	for(int i=0;i<v[v.size()-1].size();i++) {
		if(islower(v[v.size()-1][i])) v[v.size()-1][i]-=32;
	}
	cout << v[v.size()-1];
}

int main() {
	solve();
}