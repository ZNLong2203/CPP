#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int a[500] ={0};
		int max=0;
		int len=s.size();
		for(int i=0;i<len;i++) {
			a[s[i]]++;
		}
		for(int i=90;i<=130;i++) {
			if(max<a[i]) {
				max=a[i];
			}
		}
		if(max<=(len+1)/2) {
			cout << "1\n";
		}	else cout << "0\n";
	}
}