#include<bits/stdc++.h>
#include<fstream>
#define ll long long
using namespace std;

int main() {
	ifstream in_file {"DATA.in"};
	map<ll,ll> mp;
	ll xet;
	while(in_file >> xet) {
		mp[xet]++;
	}
	for(auto x:mp) {
		cout << x.first << " " << x.second << endl;
	}
}