#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[10000]={0};
	for(int i=0;i<n;i++) cin >> a[i];
	int idx = 0;
	for(int i=n-1;i>=1;i--) {
		if(a[i]<a[i-1]) {
			idx = i-1;
			break;
		}
	}	
	for(int i=n-1;i>=idx;i--) {
		if(a[i]<a[idx]) {
			swap(a[i],a[idx]);
			break;
		}
	}	
	reverse(a+idx+1,a+n);
	for(int i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}