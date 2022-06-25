#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll lt[1000]={0};
void luythua() {
	lt[0]=lt[1]=1;
	for(ll i=2;i<=16;i++) {
		lt[i]=lt[i-1]*i;
	}	
}

void solve() {
	int n,a;
	cin >> n >> a;
	ll xet = 0, sum = 1;
	vector<int> v;
	while(a>0) {
		xet=a%10;
		a/=10;
		sum*=lt[xet];
	}
	cout << sum << " ";
	int cnt = 0;
	for(int i=2;i<=sqrt(sum);i++) {
		if(sum%i==0) {
			while(sum%i==0) {
				sum/=i;
				v.push_back(i);
				cnt++;
			}
		}
	}
	for(int i=cnt-1;i>=0;i--) {
		cout << v[i];
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	luythua();
	while(t--) {
		solve();
	}
}