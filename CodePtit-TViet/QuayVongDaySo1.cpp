#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n,x;
		cin >> n >> x;
		int a[1000005]={0};
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=x;i<n;i++) cout << a[i] << " ";
		for(int i=0;i<x;i++) cout << a[i] << " ";
		cout << endl;
	}
}