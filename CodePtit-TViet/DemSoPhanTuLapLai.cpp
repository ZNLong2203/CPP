#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[1000000]={0};
		int luu[1000000]={0};
		for(int i=0;i<n;i++) {
			cin >> a[i];
			luu[a[i]]++;
		}
		int cnt = 0;
		for(int i=0;i<n;i++) {
			if(luu[a[i]]>1) {
				cnt+=luu[a[i]];
				luu[a[i]]=0;
			}
		}
		cout << cnt << endl;
	}
}