#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n) {
	int count = n;
	for(int i=0;i+1<n;i++) {
		if((a[i]+a[i+1])%2==0) {
			count-=2;
			i++;
		}
	}	
	cout << count;
	return;
}

int main() {
	int n;
	cin >> n;
	int a[100000];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	solve(a,n);
}