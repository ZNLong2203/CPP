#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v1,v2;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v1.push_back(x);
	}
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v2.push_back(x);
	}		
	int sum1 = 0, sum2 = 0, luu = 0,kq = 0;
	for(int i=0;i<n;i++) {
		sum1=0;
		sum2=0;
		for(int j=i;j<n;j++) {
			if(v1[j]==1) sum1++;
			if(v2[j]==1) sum2++;
			if(sum1==sum2) {
				luu=j-i+1;
				if(kq<luu) kq=luu;
			}
		}
	}
	cout << kq << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}