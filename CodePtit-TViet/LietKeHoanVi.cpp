#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[100]={0};
	for(int i=1;i<=n;i++) a[i]=i;
	do {
		for(int i=1;i<=n;i++) cout << a[i];
		cout << " ";
	}	while(next_permutation(a+1,a+n+1));
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}