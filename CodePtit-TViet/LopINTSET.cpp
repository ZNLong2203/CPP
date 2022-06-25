#include<bits/stdc++.h>
#include<fstream>
#define ll long long
using namespace std;

int main() {
	ifstream in_file {"DATA.in"};
	ll n,m;
	in_file >> n >> m;
	set<ll> se1,se2;
	for(int i=0;i<n;i++) {
		ll x; in_file >> x;
		se2.insert(x);
	}
	for(int i=0;i<m;i++) {
		ll x; in_file >> x;
		if(se2.count(x)) se1.insert(x);
	}
	for(auto x:se1) cout << x << " ";
	cout << endl;
}