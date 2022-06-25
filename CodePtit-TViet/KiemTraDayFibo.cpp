#include<bits/stdc++.h>
using namespace std;

int fibo[40]={0};
void sang() {
	fibo[0]=0;
	fibo[1]=fibo[2]=1;
	for(int i=3;i<=30;i++) {
		fibo[i]=fibo[i-1]+fibo[i-2];
	}	
}

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}	
	for(int i=0;i<n;i++) {
		for(int j=0;j<=30;j++) {
			if(v[i]==fibo[j]) {
				cout << v[i] << " ";
				break;
			}
		}
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	sang();
	while(t--) {
		solve();
	}
}