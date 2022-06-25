#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	string kq = "";
	if(m > 9 * n || m==0) {
		cout << "-1 -1";
		return;
	}
	while(kq.size()<n && m>=9) {
		kq+='9';
		m-=9;
	}
	if(kq.size()<n) kq+=to_string(m);
	while(kq.size()<n) kq+='0'; 
	string solon = kq;
	reverse(kq.begin(),kq.end());
	if(kq[0]=='0') {
		kq[0]='1';
		for(int i=1;i<kq.size();i++) {
			if(kq[i]!='0') {
				kq[i]--;
				break;
			}
		}
	}
	cout << kq << " " << solon << endl;
}

int main() {
	solve();	
}