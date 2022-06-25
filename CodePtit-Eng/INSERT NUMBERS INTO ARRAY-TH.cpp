#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[100000]={0};
		int b[100000]={0};
		for(int i=0;i<n;i++) {
			cin >> a[i];
			b[a[i]]++;
		}
		int temp=0;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j<n-1;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}	
		}
		int cnt=0;
		for(int i=a[0];i<=a[n-1];i++) {
			if (b[i]==0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}