#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int luu[100000]={0};
		for(int i=0;i<s.size();i++) {
			luu[s[i]]++;
		}
		int cnt = 0;
		for(int i=0;i<s.size();i++) {
			if(luu[s[i]]==1) {
				cout << s[i];
			}
		}
		cout << endl;
	}
}