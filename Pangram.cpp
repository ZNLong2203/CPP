#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n;
		cin >> n;
		int a[10000]={0};
		for(int i=0;i<s.size();i++) {
			if(isupper(s[i])) {
				s[i]+=32;
			}
			a[s[i]]++;
		}
		int count=0;
		for(int i='a';i<='z';i++) {
			if(a[i]!=0) {
				count++;
			}
		}
		if(n+count>=26) {
			cout << "1" << endl;
		}	else cout << "0" << endl;
	}
}