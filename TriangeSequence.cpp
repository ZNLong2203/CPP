#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n,max;
		cin >> n;
		int a[100000];
		max=0;
		for(int i=0;i<n;i++) {
			cin >> a[i];	
			if(max<a[i]) {
				max=a[i];
			}	
		}
		cout << max << endl;
	}
}
