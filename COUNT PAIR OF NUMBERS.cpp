#include<bits/stdc++.h>
using namespace std;

void work(int a[],int n,int x) {
	long long sum=0;
	long long count=0;
	for(int i=n-1;i>=0;i--) {
		auto it = lower_bound(a , a+i , x-a[i]);
		count+=i-(it-a);
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,x;
		cin >> n >> x;
		int a[100000];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		work(a,n,x);
	}
}