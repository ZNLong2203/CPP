#include<bits/stdc++.h>
using namespace std;

void work(int a[],int n,int x) {
	long long sum=0;
	long long count=0;
	for(int i=n-1;i>=0;i--) {
		for(int j=i-1;j>=0;j--) {
			sum=0;
			sum=a[i]+a[j];
			if(sum>=x) {
				count++;
			}	else {
				break;
			}
		}
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