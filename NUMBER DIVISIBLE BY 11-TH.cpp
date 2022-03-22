#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		long long sumle=0,sumchan=0;
		for(int i=0;i<s.size();i++) {
			if(i%2==0) {
				sumle+=s[i]-'0';
			}	else {
				sumchan+=s[i]-'0';
			}
		}
		long long xet;
		xet = abs(sumle-sumchan);
		if(xet%11==0) {
			cout << "1\n";
		}	else cout << "0\n";
	}
}