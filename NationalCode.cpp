#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string n;
		cin >> n;
		for(long long i=0;i<n.size();i++) {
			if(n[i]-'0'==0 && n[i+1]-'0'==8 && n[i+2]-'0'==4) {
				i+=2;
			}   else cout << n[i];
		}
		cout << endl;
	}
}
