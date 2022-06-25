#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[100000]={0};
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		if(x>=0) a[x]++;
	}	
	for(int i=1;i<=100000;i++) {
		if(a[i]==0) {
			cout << i << endl;
			return;
		} 
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}