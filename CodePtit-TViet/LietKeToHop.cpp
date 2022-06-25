#include<bits/stdc++.h>
using namespace std;

int a[100]={0};
int ok = 1, k, n;

void init() {
	for(int i=1;i<=n;i++) a[i]=i;
}

void move() {
	int i = n;
	while(i>=1 && a[i]==k-(n-i)) {
		i--;
	}
	if(i==0) ok = 0;
	else {
		a[i]++;
		for(int j=i+1;j<=n;j++) a[j]=a[j-1]+1;
	}
}

void solve() {
	cin >> k >> n;
	memset(a,0,sizeof(a));
	ok = 1;	
	init();
	while(ok) {
		for(int i=1;i<=n;i++) cout << a[i];
		cout << " ";
		move();
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}