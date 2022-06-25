#include<bits/stdc++.h>
using namespace std;

int ok = 1, n;
int a[100]={0};
void move() {
	int i=n;
	while(i>=1) {
		if(a[i]==0) {
			a[i]=1;
			break;
		}	else {
			a[i]=0;
			i--;
		}
	}
	if(i==0) ok = 0;
}

void solve() {
	cin >> n;
	memset(a,0,sizeof(a));
	ok = 1;
//	for(int i=1;i<=n;i++) a[i]=0;	
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