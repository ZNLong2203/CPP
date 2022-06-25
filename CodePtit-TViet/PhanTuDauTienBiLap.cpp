#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,tmp;
	cin >> n;
	set<int> se;
	int check = 0;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		if(se.find(x)!=se.end() && check==0) {
			check=1;
			tmp=x;
		} 
		se.insert(x);
	}	
	if(se.size()!=n) cout << tmp << endl;
	else cout << "-1\n";
}

int main() {
//	int t;
//	cin >> t;
//	while(t--) {
		solve();
//	}
}