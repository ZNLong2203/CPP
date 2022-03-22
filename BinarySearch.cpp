#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin >> n >> x;
	int a[10000];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
//	if(binary_search(a,a+n,5)) {
//		cout << "FOUND";
//	}	else cout << "NOT FOUND";
	auto it = lower_bound(a,a+n,x);
	cout << it-a << endl;
}