#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int one=0,zero=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]-'0'==0) {
			one=0;
			zero++;
			if(zero>=7) {
				cout << "YES";
				return 0;
			}
		}
		if(s[i]-'0'==1) {
			zero=0;
			one++;
			if(one>=7) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}