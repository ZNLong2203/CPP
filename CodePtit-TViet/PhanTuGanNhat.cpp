#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}	
	int k,x,xet,check=0;
	cin >> k >> x;
	auto it = lower_bound(v.begin(),v.end(),x);
	xet = it-v.begin();
	if(*it==x) {
		check=1;
	} 
	if(xet==n) {
		if(check==1) for(int i=xet-k/2;i<n-1;i++) cout << v[i] << " ";
		else for(int i=xet-k/2;i<n;i++) cout << v[i] << " ";
		for(int i=0;i<k/2;i++) cout << "0 ";
		cout << endl;
		return;
	}	else {
		for(int i=xet-k/2;i<xet;i++) cout << v[i] << " ";
		if(check==1) for(int i=xet+1;i<xet+k/2+1;i++) cout << v[i] << " ";
		else for(int i=xet;i<xet+k/2;i++) cout << v[i] << " ";
		cout << endl;
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}