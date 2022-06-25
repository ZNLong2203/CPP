#include<bits/stdc++.h>
using namespace std;

int check(int a[],int dem) {
	int loai=0;
	int sixandeight=0;
	for(int i=0;i<dem;i++) {
		if(a[i]==6 || a[i]==8) {
			sixandeight++;
		}
	}
	if(sixandeight==5) {
		return 1;
	}
	if(a[0]==a[1] && a[0]==a[2] && a[3]==a[4]) {
		return 1;
	}
	for(int i=0;i+1<dem;i++) {
		if(a[i]>=a[i+1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int a[10000]={0};
		int dem=0;
		int count=0;
		for(int i=0;i<s.size();i++) {
			if(s[i]=='-' || s[i]=='.') {
				count++;
				i++;
			}
			if(count!=0) {
				a[dem]=s[i]-'0';
				dem++;
			}
		}
		if(check(a,dem)) {
			cout << "YES\n";
		}	else cout << "NO\n";
	}
}