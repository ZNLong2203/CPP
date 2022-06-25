#include<bits/stdc++.h>
using namespace std;

void work(string &s) {
	int max=-1,temp;
	int luu=-1,dc;
	for(int i=0;i+1<s.size();i++) {
		if(s[i]-'0'>s[i+1]-'0') luu = i;
	}
	if(luu==-1) {
		cout << "-1" << endl;
		return;
	}
	for(int i=luu+1;i<s.size();i++) {
		if((s[i]<s[luu]) && s[i]>max) {
			max=s[i];
			dc=i;
		}
	}
	temp=s[luu];
	s[luu]=max;
	s[dc]=temp;
	cout << s << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		work(s);
	}	
}