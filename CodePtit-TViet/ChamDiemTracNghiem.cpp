#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	if(n==101) {
		s = "ABBADCCABDCCABD";
	}	else s = "ACCABCDDBBCDDBB";
	double cnt = 0;
	char xet;
	for(int i=0;i<15;i++) {
		cin >> xet;
		if(xet==s[i]) cnt++;
	}
	cnt=(cnt/15)*10;
	cout << fixed << setprecision(2) << cnt << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}