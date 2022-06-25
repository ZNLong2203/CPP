#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[10000]={0};
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}	
		int l,r;
		cin >> l >> r;
		int i=l;
		while(i+1<=r && a[i]<=a[i+1]) {
			i++;
		}
		while(i+1<=r && a[i]>=a[i+1]) {
			i++;
		}
		if(i==r) {
			cout << "Yes\n";
		}	else cout << "No\n";
	}
}
