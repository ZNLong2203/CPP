#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	unordered_map<ll,ll> mp;
	ll x;
	vector<ll> v;
	while(cin >> x) {
		v.push_back(x);
		mp[x]++;	
	}
	for(auto x:v) { 
		if(mp[x]) {
			cout << x << " " << mp[x] << endl;
			mp[x]=0;	
		}
	}
}