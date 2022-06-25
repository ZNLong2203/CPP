#include<bits/stdc++.h>
#define ll long long
using namespace std;

void work(string n,string m) {
	ll sobeN = 0;
	ll solonN = 0;
	ll sobeM = 0;
	ll solonM = 0;
	for(int i=0;i<n.size();i++) {
		if(n[i]=='6') {
			n[i]='5';
		}
		sobeN=sobeN*10 + (n[i]-'0');
	}
	for(int i=0;i<n.size();i++) {
		if(n[i]=='5') {
			n[i]='6';
		}
		solonN=solonN*10 + (n[i]-'0');
	}
	for(int i=0;i<m.size();i++) {
		if(m[i]=='6') {
			m[i]='5';
		}
		sobeM=sobeM*10 + (m[i]-'0');
	}
	for(int i=0;i<m.size();i++) {
		if(m[i]=='5') {
			m[i]='6';
		}
		solonM=solonM*10 + (m[i]-'0');
	}
	long long kq1 = sobeN+ sobeM;
	long long kq2 = solonN + solonM;
	cout << kq1 << " " << kq2 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string n,m;
		cin >> n >> m;
		work(n,m);
	}
}