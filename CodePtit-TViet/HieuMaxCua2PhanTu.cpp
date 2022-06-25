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
	int sum1=0, sum2=0, cnt=0;
	for(int i=n-1;i>=0;i--) {
		for(int j=i-1;j>=0;j--) {
			if(v[i]>v[j]) {
				cnt++;
				sum1=v[i]-v[j];
				if(sum1>sum2) sum2=sum1;
			}
		}
	}	
	if(cnt==0) cout << "-1\n";
	else cout << sum2 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}